#include <iostream>
using namespace std;

int main ()
{   int a = 0 ;
    int b = 0 ;//初始化a和b的值
    cout << "请输入第一个数字:" << endl ;
    cin >> a ;
    cout << "请输入第二个数字:" << endl ;
    cin >> b ;
    if(a>b) {//比较a和b的大小
        cout << "a大于b" << endl ;
    }
    else if(a<b) {
        cout << "a小于b" << endl ;
    }
    else {
        cout << "a等于b" << endl ;
    }
    system ("pause");
    return 0;
}