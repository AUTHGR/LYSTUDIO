#include <iostream>
#include <vector>
using namespace std;
const int N = 100010;
int fbnq(int n)                                //菲波那契数列计算函数
{                                              //分类讨论情况
    if (n == 1 || n == 2) {
        return 1;
    }
    if(n > 2){
    return (fbnq(n - 1) + fbnq(n - 2));
    }
}

int main() {                                   //输入输出主函数
    int n,t;                                  
    cin >> t;

    vector<int> numbers;                       //存储输入的数字，添加到向量中
                  
    for (int i = 0; i < t; i++) {              //利用for循环，根据t的值循决定循环输入次数
        int n;
        cin >> n;
        numbers.push_back(n);
     
    }


    for (int i = 0; i < numbers.size(); i++) {  //根据t的值决定循环输出次数
        int b = fbnq(numbers[i]);               //将菲波那契数列计算函数的值赋予到b中
        cout << b << endl;
    }

    return 0;
}