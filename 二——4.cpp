#include <iostream>
using namespace std;
int main()
{
	double num1, num2;
	char op;
	cout << "请输入表达式（格式：数字 运算符 数字）：";
	cin >> num1 >> op >> num2;
	double result;
	bool valid = true;
	switch (op)
	{
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
	case'/':
		if (num2 == 0)
		{
			cout << "错误：除数不能为零！" << endl;
			valid = false;
		}
		else
		{
			result = num1 / num2;
		}
		break;
	case'%':
		int intNum1 = static_cast<int>(num1);
		int intNum2 = static_cast<int>(num2);
		if (intNum2 == 0)
		{
			cout << "错误：除数不能为零！" << endl;
			valid = false;
		}
		else
		{
			result = intNum1 % intNum2;
		}
		break;
	
	}
			if(valid)
			{
				cout << "结果：" << result << endl;
			}
			return 0;
}