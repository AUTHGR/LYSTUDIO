#include<iostream>
#include <cmath>                      //调用数学常用库函数
using namespace std;
int main()
{
    long double a,b;
    cin>>a>>b;
    int c=(int)(log10(b)/log10(a));  //将对数式子转换为除法形式
    cout<<c<<endl;
}
