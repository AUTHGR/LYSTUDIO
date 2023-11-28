#include <iostream>
using namespace std;

class Circle {
private:
    double radius; 

public:
    // 构造函数
    Circle(double r) {
        radius = r;
    }

    // 计算圆的面积
    double getArea() {
        return 3.14 * radius * radius;
    }

    // 计算圆的周长
    double getPerimeter() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    // 创建 Circle 对象并初始化半径
    Circle c(8.0);

    // 计算圆的面积和周长并输出
    cout << "圆的面积为：" << c.getArea() << endl;
    cout << "圆的周长为：" << c.getPerimeter() << endl;

    return 0;
}
