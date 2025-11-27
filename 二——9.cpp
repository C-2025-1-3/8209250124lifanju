#include<iostream>
using namespace std;
int main()
{
	double price = 0.8;
	int day = 1;
	int apples = 2;
	int totalApples = 0;
	double totalCost = 0;
	while (apples <= 100)
		totalApples += apples;
	totalCost += apples * price;
	day++;
	apples * 2;
	double averageCost = totalCost / (day - 1);
	cout << "每天平均花费:" << averageCost <<"元" << endl;
	return 0;
}