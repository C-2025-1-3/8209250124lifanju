#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
	int a, b;
	cout <<"请输入两个正整数：" ;
	cin >> a >> b;
	int gcdValue = gcd(a, b);
	int lcmValue = lcm(a, b);
	cout << "最大公约数为：" << gcdValue << endl;
	cout << "最小公倍数为：" << lcmValue << endl;
	return 0;
}