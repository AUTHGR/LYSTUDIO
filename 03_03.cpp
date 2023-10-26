#include<iostream>
using namespace std;
int main()
{
	int a = 0;//初始化a和b的值
    int b = 0;
	cout << "请输入一个正整数" << endl;
	cin >> a;
    b = a % 7;//算余数
	switch (b)
	{
	case 6:
		cout << "星期六" << endl;
		break;
	case 5:
		cout << "星期五" << endl;
		break;
	case 4:
		cout << "星期四" << endl;
		break;
	case 3:
		cout << "星期三" << endl;
        break;
    case 2:
		cout << "星期二" << endl;
        break;
    case 1:
		cout << "星期一" << endl;
		break;
	default :
		cout << "星期日" << endl;
	break;
	}
 
	system("pause");
 
	return 0;
 
}