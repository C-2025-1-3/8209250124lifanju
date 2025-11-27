#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		int C;
		C = a + b + c;
		cout << "三角形的周长为:"<<C<<endl;
		if (a ==b && a == c && b == c)
		{
			cout << "该三角形是等腰三角形"<<endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不存在这样的三角形" << endl;
	}
}