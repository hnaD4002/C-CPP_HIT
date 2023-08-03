#include<iostream>

using namespace std;

class School{
private:
	string name, date;
public:
	School(){}
	School(string a, string b){
		this->name = a;
		this->date = b;
	}
	void input(){
		cout << "Nhap Name School: ";	getline(cin, name);
		cout << "Nhap Date School: ";	getline(cin, date);
	}

	void output(){
		cout << "Name School: " << name << endl;
		cout << "Date School: " << date << endl;
	}
};

class Faculty
{
private:
	string name;
	School sch;
public:
	Faculty(){}
	~Faculty(){}
	Faculty(string a, School b){
		this->name = a;
		this->sch = b;
	}
	void input(){
		cout << "Nhap Name Faculty: ";	getline(cin, name);
		sch.input();
	}
	void outout(){
		cout << "Name Faculty: " << name << endl;
		sch.output();
	}
};

class Student{
private:
	Faculty fac;
	string name;
	int age;
public:
	Student(){}
	Student(Faculty a, string b, int c){
		this->fac = a;
		this->name = b;
		this->age = c;
	}

	void input(){
		cout << "Nhap Name Student: ";	getline(cin, name);
		cout << "Nhap Age: ";	cin >> age;
		fac.input();
	}

	void output(){
		cout << "Name Student: " << name << endl;
		cout << "Age Student: " << age << endl;
		fac.outout();
	}
}


int main(){
	Student a;
	a.input();
	a.output();
	return 0;
}