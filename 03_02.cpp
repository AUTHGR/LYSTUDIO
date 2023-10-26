#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "请输入一个整数: ";
    cin >> num;

    int a = num;  // 保留原始输入的整数
    int b = 0;

    // 计算位数
    do {
        num /= 10;
        b++;
    } while (num != 0);

    cout << "你输入的整数是: " << a << ",并且它的位数是"<< b << endl;
    return 0;
}
