#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>

using namespace std;
#define max 100

struct SinhVien
{
	char msv[10], name[30], que[30];
	float gpa;
};
SinhVien SV[max];

SinhVien getData(){
	SinhVien a;
	cout << "Nhap Ma Sinh Vien: ";
	cin.getline(a.msv, 10);
	cout << "Nhap Ho va Ten: ";
	cin.getline(a.name, 30);
	cout << "Nhap Que Quan: ";
	cin.getline(a.que, 30);
	cout << "Nhap Diem Trung Binh: ";
	cin >> a.gpa;
	return a;
}

void Nhap_SV(SinhVien *&list, int &n){
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n < 0 || n > 100 && cout << "Nhap Lai!\n");
	list = new SinhVien[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap Thong Tin Sinh Vien!\n";
		cin.ignore();
		list[i] = getData();
	}
}

void Xuat(ofstream &fileout, SinhVien *list, int n){
	cout << "\n--------------DANH SACH SINH VIEN-------------\n";
	cout << left << setw(5) << "\nSTT" << setw(10) << "MSV" << setw(30) << "Ho va Ten" << setw(30) << "Que Quan" << setw(5) << "GPA\n";  
	fileout << "\n--------------DANH SACH SINH VIEN-------------\n";
	fileout << left << setw(5) << "\nSTT" << setw(10) << "MSV" << setw(30) << "Ho va Ten" << setw(30) << "Que Quan" << setw(5) << "GPA\n";

	for(int i = 0; i < n; i++){
		SinhVien a = list[i];
		cout << left << setw(5) << i+1 << setw(10) << a.msv << setw(30) << a.name << setw(30) << a.que << setw(5) << a.gpa << endl;
		fileout << left << setw(5) << i+1 << setw(10) << a.msv << setw(30) << a.name << setw(30) << a.que << setw(5) << a.gpa << endl; 
	}
}

void insert(SinhVien *&list, int a, int b){
	SinhVien *temp = new SinhVien[b];
	for(int i = 0; i < b; i++){
		temp[i] = list[i];
	}
	delete[] list;
	list = temp;
}


void Them_SV(SinhVien *&list, int &n){
	SinhVien a;
	int k;
	do{
		cout << "Nhap Vi Tri Can Chen: ";
		cin >> k;
	}while(k < 0 || k > n && cout << "Vui Long Nhap Lai!\n");
	cout << "Nhap Thong Tin Sinh Vien Can Them\n";
	cin.ignore();
	a = getData();
	n++;
	for(int i = n-1; i >= k; i--){
		list[i] = list[i-1];
	}
	list[k-1] = a;
}


int find_id(SinhVien *list, int n, char msv[]){
	for (int i = 0; i < n; i++)
	{
		if(strcmp(list->msv, msv) == 0){
			return i;
		}
	}
	return -1;
}

void find_SV(ofstream &fileout, SinhVien *list, int n){
	char id[10];
	cin.getline(id, 10);
	int k = find_id(list, n, id);
	if(k == -1){
		cout << "Khong Tim Thay Thong Tin Sinh Vien!\n";
	}else{
		cout << "Thong Tin SInh Vien!\n";
		cout << left << setw(5) << k+1 << setw(10) << list[k].msv << setw(30) << list[k].name << setw(30) << list[k].que << setw(5) << list[k].gpa << endl;
		fileout << left << setw(5) << k+1 << setw(10) << list[k].msv << setw(30) << list[k].name << setw(30) << list[k].que << setw(5) << list[k].gpa << endl;
	}
}

void erase_SV(SinhVien *&list, int &n){
	char id[10];
	cin.getline(id, 10);
	int k = find_id(list, n, id);
	if(k == -1){
		cout << "Khong Tim Thay Thong Tin Sinh Vien!\n";
	}else{
		for (int i = k; i < n-1; i++)
		{
			list[i] = list[i+1];
		}
		insert(list, n, n-1);
		n--;
		cout << "Xoa Thanh Cong!\n";
	}
}

void SapXep(SinhVien *&list, int n){
	for(int i = 0;i < n-1; i++){
		for(int j = i +1; j < n; j++){
			if(list[i].name > list[j].name){
				SinhVien a = list[i];
				list[i] = list[j];
				list[j] = a;
			}
		}
	}
}

void menu(){
	ofstream fileout("SinhVien.txt");
	int n = 0;
	SinhVien *SV;
	while(true){
		cout << "----------------------------------------------------------------" << endl;
        cout << "1. Nhap danh sach sinh vien" << endl;
        cout << "2. Xuat danh sach sih vien" << endl;
        cout << "3. Them sinh vien" << endl;
        cout << "4. Xoa sinh vien" << endl;
        cout << "5. Sap xep danh sach" << endl;
        cout << "6. Tim kiem" << endl;
        cout << "0. Ket thuc" << endl;
        cout << "----------------------------------------------------------------" << endl;
		int lc;
		do{
			cout << "Nhap lua chon: ";
			cin >> lc;
		}while(lc < 0 || lc > 6 && cout << "Nhap lai di!\n");
		switch (lc)
		{
		case 1:
			Nhap_SV(SV, n);
			continue;
		case 2:
			Xuat(fileout, SV, n);
			continue;
		case 3:
			Them_SV(SV, n);
			continue;
		case 4:
			erase_SV(SV, n);
			continue;
		case 5:
			SapXep(SV, n);
			continue;
		case 6: 
			find_SV(fileout, SV, n);
			continue;
		case 0:
			break;
		default:
			cout << "Vui long nhap lai!\n";
		}
		cout << "Tam Biet!\n";
		break;
	}
}

int main(){
	menu();
	return 0;
}