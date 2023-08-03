#include<iostream>
using namespace std;
int main(){
	int day, month, year;
	do{
		cin >> day;
	}while(day < 1 || day > 31);
	do{
		cin >> month;
	}while(month < 1 || month > 12);
	do{
		cin >> year;
	}while(year < 0);
	int day_1 = day, month_1 = month, year_1 = year;
	if(month == 2 && day > 29){
		cout << "Du lieu khong hop le!\n";
		return 0;
	}else if(month == 2 && !((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && day == 29){
		cout << "Du lieu khong hop le!\n";
		return 0;
	}else{
		// Ngay mai
		int ngay;
		if( month == 4 || month == 6 || month == 9 || month == 11)
			ngay = 30;
		else if(month == 2)
			ngay = 28 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
		else 
			ngay = 31;
		(day %= ngay)++;
		if(day == 1){
			(month %= 12)++;
			if(month == 1)
				year++;
		}
		cout << "Ngay mai: " << day << "/" << month << "/" << year << endl;
		// Ngay hom qua
		if(day_1 == 1){
			if(month_1 == 4 || month_1 == 6 || month_1 == 9 || month_1 == 11)
				day_1 = 30;
			else if(month_1 == 2)
			day_1 = 28 + ((year_1 % 4 == 0 && year_1 % 100 != 0) || year_1 % 400 == 0);
			else 
				day_1 = 31;
			if(month_1 == 1){
				day_1 = 31;
				month_1 = 12;
				year_1--;
			}else
				month_1--;
			cout << "Hom qua: " << day_1 << "/" << month_1 << "/" << year_1 << endl;
		}
	}
	return 0;
}