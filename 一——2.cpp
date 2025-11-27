#include<iostream>
using namespace std;
#define PI 3.14159
int main()
{
	double r, h, volume;
	cout << "ÇëÊäÈëÔ²×¶µ×Ãæ°ë¾¶:";
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶¸ß:";
	cin >> h;
	volume = (1.0 / 3) * PI * r * r * h;
	cout << "Ô²×¶µÄÌå»ýÊÇ:" << volume << endl;
	return 0;
}
