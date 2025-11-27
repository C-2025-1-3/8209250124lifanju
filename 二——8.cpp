#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, Xn, Xn1;
	cout << "ÇëÊäÈëa:";
	cin >> a;
	double absA = fabs(a);
	Xn = absA;
	Xn1 = 0.5 * (Xn + absA / Xn);
	if (fabs(Xn1-Xn)<0.00001)
	{
		cout << "sqrt(" << a << ")=" << fixed << setprecision(5) << Xn1 << endl;
	}
	else
	{
		while (fabs(Xn1 - Xn) >= 0.00001)
		{
			Xn = Xn1;
			Xn1 = 0.5 * (Xn + absA / Xn);
		}
		cout << "sqrt(" << a << ")=" << fixed << setprecision(5) << Xn1 << endl;
	}
	return 0;

	

}