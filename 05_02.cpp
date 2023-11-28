#include <iostream>
using namespace std;

class Triangle {
private:
    //创立边长
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    //判断三角形类型
    void printTriangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "等边三角形" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "等腰三角形" << endl;
        } else if (side1 + side2 < side3 || side2 + side3 < side1 || side1 + side3 < side2 || side1 - side2 > side3 || side2 - side3 > side1 || side1 - side3 > side2) {
            cout << "不符合条件的边长" << endl;
        } 
        else {
            cout << "不等边三角形" << endl;
        }
    }
};
int main() {
    double s1, s2, s3;
    cout << "请输入三角形的三边长度：" << endl;
    cin >> s1 >> s2 >> s3;

    Triangle triangle(s1, s2, s3);
    triangle.printTriangleType();

    return 0;
}
