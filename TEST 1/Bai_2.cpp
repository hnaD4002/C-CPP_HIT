#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

#define max 100

struct HangHoa
{
	string id;
	string name;
	int year;
};

HangHoa getData()
{
	HangHoa a;
	cout << "Nhap Ma Hang: ";
	cin.ignore();
	getline(cin, a.id);
	cout << "Nhap Ten Hang: ";
	getline(cin, a.name);
	cout << "Nam San Xuat: ";
	cin >> a.year;
	return a;
}

void Nhap_Thong_Tin(HangHoa *&list, int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	list = new HangHoa[n];
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap Thong Tin Hang Hoa " << i + 1 << endl;
		list[i] = getData();
	}
}

void Doc_Thong_Tin(ifstream &filein, HangHoa *&list, int &n)
{
	filein >> n;
	filein.ignore();
	list = new HangHoa[n];
	for (int i = 0; i < n; i++)
	{
		getline(filein, list[i].id);
		getline(filein, list[i].name);
		filein >> list[i].year;
		filein.ignore();
	}
	filein.close();
}

void In_Thong_Tin(ofstream &fileout, HangHoa *list, int n)
{
	fileout << "\n--------- Thong Tin Hang Hoa -----------\n";
	fileout << left << setw(5) << "STT" << setw(20) << "Ma Hang Hoa" << setw(30) << "Ten Hang Hoa" << setw(10) << "Nam San Xuat\n";
	for (int i = 0; i < n; i++)
	{
		fileout << left << setw(5) << i + 1 << setw(20) << list[i].id << setw(30) << list[i].name << setw(10) << list[i].year << endl;
	}
	fileout.close();
}

void Xuat(HangHoa *list, int n)
{
	cout << "\n--------- Thong Tin Hang Hoa -----------\n";
	cout << left << setw(5) << "STT" << setw(20) << "Ma Hang Hoa" << setw(30) << "Ten Hang Hoa" << setw(10) << "Nam San Xuat\n";
	for (int i = 0; i < n; i++)
	{
		cout << left << setw(5) << i + 1 << setw(20) << list[i].id << setw(30) << list[i].name << setw(10) << list[i].year << endl;
	}
}

int find_id(HangHoa *list, int n, string a)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i].id == a)
			return i + 1;
	}
	return -1;
}

void Tim_Kiem(ofstream &fileout, HangHoa *list, int n)
{
	string a;
	cin.ignore();
	cout << "Nhap ma hang can tim: ";
	getline(cin, a);
	int k = find_id(list, n, a);
	if (k == -1)
	{
		cout << "NO\n";
		fileout << "NO\n";
	}
	else
	{
		cout << "YES\n";
		fileout << "YES\n";
		cout << "Thong Tin Hang Hoa Can Tim!\n";
		cout << "\n--------- Thong Tin Hang Hoa -----------\n";
		cout << left << setw(5) << "STT" << setw(20) << "Ma Hang Hoa" << setw(30) << "Ten Hang Hoa" << setw(10) << "Nam San Xuat\n";
		cout << left << setw(5) << k << setw(20) << list[k - 1].id << setw(30) << list[k - 1].name << setw(10) << list[k - 1].year << endl;
	}
}

void ChenHangHoa(ofstream &fileout, HangHoa *&list, int &n)
{
	cout << "Nhap thong tin hang hoa can chen!\n";
	cin.ignore();
	HangHoa a;
	a = getData();
	int k;
	cout << "Nhap vi tri can chen: ";
	do
	{
		cin >> k;
	} while ((k < 0 || k > n) && cout << "Vui long nhap lai!\n");
	n++;
	for (int i = n - 1; i > k; i--)
	{
		list[i] = list[i - 1];
	}
	list[k] = a;
	cout << "Danh sach sau khi chen!!\n";
	fileout << "Danh sach sau khi chen!!\n";
	In_Thong_Tin(fileout, list, n);
}

void XoaHangHoa(ofstream &fileout, HangHoa *&list, int &n)
{
	int k;
	cout << "Nhap vi tri can xoa: ";
	do
	{
		cin >> k;
	} while ((k < 0 || k > n) && cout << "Vui long nhap lai!\n");
	for (int i = k - 1; i < n - 1; i++)
	{
		list[i] = list[i + 1];
	}
	n--;
	cout << "Danh sach sau khi xoa!!\n";
	fileout << "Danh sach sau khi xoa!!\n";
	In_Thong_Tin(fileout, list, n);
}

void SapXep(ofstream &fileout, HangHoa *list, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (list[j].year > list[j + 1].year)
			{
				HangHoa temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	cout << "Danh sach sau khi sap xep!!\n";
	fileout << "Danh sach sau khi sap xep!!\n";
	In_Thong_Tin(fileout, list, n);
}

void menu()
{
	cout << "----------------MENU---------------\n";
	cout << "1: Nhap thong tin hang hoa.\n";
	cout << "2: Doc thong tu file input.txt\n";
	cout << "3: In thong tin hang hoa ra man hinh.\n";
	cout << "4: Ghi thong tin hang hoa vao file output.txt\n";
	cout << "5: Tim thong tin hang hoa.\n";
	cout << "6: Chen hang hoa.\n";
	cout << "7: Xoa hang hoa.\n";
	cout << "8: Sap xep hang hoa theo chieu tang dan cua nam san xuat.\n";
	cout << "0: Thoat chuong trinh!\n";
	cout << "------------------------------------\n";
	int lc;
	HangHoa *list;
	int n;
	ofstream fileout("output.txt");
	ifstream filein("input.txt");
	while (true)
	{
		cout << "Nhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 1:
			Nhap_Thong_Tin(list, n);
			continue;
		case 2:
			Doc_Thong_Tin(filein, list, n);
			continue;
		case 4:
			In_Thong_Tin(fileout, list, n);
			continue;
		case 3:
			Xuat(list, n);
			continue;
		case 5:
			Tim_Kiem(fileout, list, n);
			continue;
		case 6:
			ChenHangHoa(fileout, list, n);
			continue;
		case 7:
			XoaHangHoa(fileout, list, n);
			continue;
		case 8:
			SapXep(fileout, list, n);
			continue;
		case 0:
			cout << "Thoat Chuong Trinh\n";
			break;
		default:
			cout << "Vui long nhap lai!\n";
			continue;
		}
		cout << "GOODBYE!!\n";
		delete[] list;
		break;
	}
}

int main()
{
	menu();
	return 0;
}
