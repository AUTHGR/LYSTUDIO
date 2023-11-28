#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    string ID;
    int score;
    // 静态变量
    static int count; 
public:
    Student(string n, string c, string id, int s) {
        name = n;
        className = c;
        ID = id;
        score = s;
        // 每次新建对象时，对象总数加1
        count++; 
    }
    void display() {
        cout << "姓名：" << name << endl;
        cout << "班级：" << className << endl;
        cout << "学号：" << ID << endl;
        cout << "分数：" << score << endl;
        if (score >= 90) {
            cout << "成绩：A" << endl;
        } else if (score >= 80) {
            cout << "成绩：B" << endl;
        } else if (score >= 70) {
            cout << "成绩：C" << endl;
        } else {
            cout << "成绩：D" << endl;
        }
        cout <<" " << endl;
    }
    static void displayCount() {
        cout << "对象总数：" << count << endl;
    }
};
// 静态变量初始化
int Student::count = 0; 

int main() {
    Student s1("刘力源", "22影技本", "221112005", 99);
    s1.display();
    Student s2("张三", "24影技本", "241112015", 100);
    s2.display();
    // 调用静态函数，输出对象总数
    Student::displayCount(); 
    return 0;
}
