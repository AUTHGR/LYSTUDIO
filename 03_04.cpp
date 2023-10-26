#include <iostream>
using namespace std;

int main() {
    int n = 8; // 设置金字塔的行数
    int space = n - 1;
    int star = 1;

    while (n > 0) {
        // 输出空格
        int count_space = space;
        while (count_space > 0) {
            cout << " ";
            count_space--;
        }

        // 输出星号
        int count_star = star;
        while (count_star > 0) {
            cout << "*";
            count_star--;
        }

        cout << endl;
        space--;
        star += 2;
        n--;
    }

    return 0;
}
