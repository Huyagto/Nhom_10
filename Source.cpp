#include <iostream>

using namespace std;
int tong(int a, int b);
	return a + b;
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int x,y;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong 2 so: ";
	cout << "Nhap a: ";
	cin >> x;
	cout << "Nhap b: ";
	cin >> y;
	cout<<"Tong = " << tong(x,y) << endl;
	system("pause");
	cout<<"Hieu a - b: ";
	cout << "Nhap a: ";
	cin >> x;
	cout << "Nhap b: ";
	cin >> y;
	cout<<"Hieu a-b: "<<hieu(x,y)<<endl;

	return 0;
}

int hieu(int a,int b){
	return a-b;
}