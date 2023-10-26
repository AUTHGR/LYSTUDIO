#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "200-300之间的质数有：" << endl;

    for (int n = 200; n <= 300; n++) {  // for循环输出范围内所有整数
        bool zhishu = true;  //定义布尔类型

        for (int i = 2; i <= sqrt(n); i++) { //for循环输出范围内能被整除的整数
            if (n % i == 0) {
                zhishu = false;
                break;
            }
        }

        if (zhishu) { //输出范围内不能被整除的整数
            cout << n << endl;
        }
    }

    cout << endl;

    return 0;
}

