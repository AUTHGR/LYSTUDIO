#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string swapCase(const string& str) {      //定义字符串
    string result = str;                  
    for (char& c : result) {              //利用for循环对每一个字符进行处理
        if (islower(c)) {
            c = toupper(c);               //使用标准库函数改变大小写
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);                  //利用getline函数存储在字符串对象
    
    string swapped = swapCase(input);
    cout << swapped << endl;
    
    return 0;
}
