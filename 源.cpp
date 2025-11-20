#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cout << "请输入华氏温度：";
    cin >> fahrenheit;
    // 华氏转摄氏公式：C = (F - 32) * 5 / 9
    celsius = (fahrenheit - 32) * 5.0 / 9;
    cout << "转换后的摄氏温度为：" << fixed << setprecision(2) << celsius << "℃" << endl;
    return 0;
}