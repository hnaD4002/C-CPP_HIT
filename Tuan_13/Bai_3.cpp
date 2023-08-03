#include<iostream>

using namespace std;
class School{
private:
	string name, date;
public:
	void setName(string a){
		this->name = a;
	}
	void setDate(string b){
		this->date = b;
	}
	string getName(){
		return name;
	}
	string getDate(){
		return date;
	}
};

class Faculty{
private:
	string name, date;
	School x;
public:
	void input(){
		cout << "Nhap Faculty Name: ";
		getline(cin, name);
		cout << "Nhap Faculty Date: ";
		getline(cin, date);
		cout << "Nhap School Name: ";
		string a;
		getline(cin, a);
		x.setName(a);
		cout << "Nhap School Date: ";
		getline(cin, a);
		x.setDate(a);
	}

	void output(){
		cout << "Faculty Name: " << name << endl;
		cout << "Faculty Date: " << date << endl;
		cout << "School Name: " << x.getName() << endl;
		cout << "School Date: " << x.getDate() << endl; 
	}
};

class Person{
protected:
	string name, birth, address;
public:
	Person(){}
	void input(){
		cout << "Nhap Name: ";	getline(cin, name);
		cout << "Nhap Birth: ";	getline(cin, birth);
		cout << "Nhap Address: ";	getline(cin, address);
	}
	void output(){
		cout << "Name: " << name << endl;
		cout << "Birth: " << birth << endl;
		cout << "Address: " << address << endl;
	}
};
class Student : public Person {
protected:
	Faculty y;
	string clas;
	float score;
public:
	Student() : Person(){}
	void input(){
		Person::input();
		cout << "Nhap Class: ";
		getline(cin, clas);
		cout << "Nhap Score: ";
		cin >> score;
		cin.ignore();
		y.input();
	}
	void output(){
		cout << "----------------------------\n";
		cout << "\nThong Tin Sinh Vien\n\n";
		Person::output();
		cout << "Class: " << clas << endl;
		cout << "Score: " << score << endl;
		y.output();
	}
};
int main(){
	Student a;
	a.input();
	a.output();
	return 0;
}