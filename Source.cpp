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
	cout << "Nhap a: ";
	cin >> x;
	cout << "Nhap b: ";
	cin >> y;
	cout<<"Tong = " << tong(x,y) << endl;
	system("pause");
	return 0;
}