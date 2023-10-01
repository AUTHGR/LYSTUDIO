#include <iostream>
using namespace std;
 
int main()
{
    int a1 = 0 ;

    cout<<"请输入两个年份。"<<endl;
    cin>>a1;
    if(a1%4==0)
    {
        cout<<"是闰年，下一个闰年是4年后，是"<<a1+4<<"年“<<endl;
    }
    else 
    {
        cout<<"不是闰年"<<endl;
    }

	system("pause");
 
	return 0;
}