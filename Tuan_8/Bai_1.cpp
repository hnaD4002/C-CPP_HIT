#include<iostream>
#include<fstream>

using namespace std;

struct tamgiac{
	float a, b, c;
};

tamgiac getData(ifstream& fileIn){
	tamgiac tg;
	fileIn >> tg.a;
	fileIn >> tg.b;
	fileIn >> tg.c;
	return tg;
}
void Xuat_1(tamgiac x){
	cout << x.a << " " << x.b << " " << x.c;
}
void Xuat_2(ostream& fileOut, tamgiac tg){
    
	fileOut << tg.a << " " << tg.b << " " << tg.c;
}

void check(ostream &fileout, tamgiac x){
	float a = x.a, b = x.b, c = x.c;
	if( a<b+c && b<a+c && c<a+b )
    {
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        {
            cout<<" tam giac vuong\n";
            fileout<<" tam giac vuong\n";
        }
        else if(a==b && b==c)
        {
            cout<<" tam giac deu\n";
            fileout<<" tam giac deu\n";
        }
        else if(a==b || a==c || b==c)
        {
            cout<<" tam giac can\n";
            fileout<<" tam giac can\n";
        }
        //điều kiện tam giác tù là có một góc lơn hơn 90 độ
        else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
        {
            cout<<" tam giac tu\n";
            fileout<<" tam giac tu\n";
        }
        //và trường hợp còn lại là tam giác nhọn
        else
        {
            cout<<" tam giac nhon\n";
            fileout<<" tam giac nhon\n";
        }
    }
    else
    {
        cout<<" khong phai tam giac\n";
        fileout<<" khong phai tam giac\n";
    }
}
int main(){
	int n;
	ifstream filein("input.txt");
	ofstream fileout("output.txt");
	filein >> n;
    fileout << n << endl;
	for(int i = 0; i < n; i ++){
		tamgiac x = getData(filein);
		Xuat_1(x);
		Xuat_2(fileout, x);
		check(fileout, x);
	}	
	return 0;
}