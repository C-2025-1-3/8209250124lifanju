#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "请输入一个字符：";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "转换后的大写字符：" << static_cast<char>(ch - 32) << endl;
    }
    else 
    {
        cout << "后继字符的 ASCII 码值：" << static_cast<int>(ch + 1) << endl;
    }

    return 0;
}