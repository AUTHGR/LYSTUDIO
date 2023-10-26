#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;//初始化a，b，c
    cout << "请输入一元二次方程的参数 a, b, 和 c：" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    double d = b * b - 4 * a * c;//计算判别式

    if (a == 0) {
        cout << "a不能为0！" << endl ;
    }
    else if (d > 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);//计算根
        double root2 = (-b - sqrt(d)) / (2 * a);
        cout << "方程有两个实根：" << root1 << " 和 " << root2 << endl;
    }
    else if (d == 0) { //对d进行分类讨论
        double root1 = (-b + sqrt(d)) / (2 * a);
        cout << "方程有两个相同的实根：" << root1 << endl;
    } 
    else {
        cout << "方程没有实根。" << endl;
    }

    return 0;
}
