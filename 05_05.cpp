#include <iostream>
using namespace std;

class Shape {
public:
    // 纯虚函数，用于计算面积
    virtual double getArea() = 0; 
    // 纯虚函数，用于计算周长
    virtual double getPerimeter() = 0; 
};
//定义Circle，继承shape中的面积和周长
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double getArea() override {
        return 3.14 * radius * radius;
    }
    double getPerimeter() override {
        return 2 * 3.14 * radius;
    }
};
//定义Rectangle，继承shape中的面积和周长
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() override {
        return length * width;
    }
    double getPerimeter() override {
        return 2 * (length + width);
    }
};
//定义Triangle，继承shape中的面积和周长
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    double getArea() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle c(1);
    cout << "圆的面积：" << c.getArea() << endl;
    cout << "圆的周长：" << c.getPerimeter() << endl;

    Rectangle r(2, 3);
    cout << "矩形的面积：" << r.getArea() << endl;
    cout << "矩形的周长：" << r.getPerimeter() << endl;

    Triangle t(4, 5, 6);
    cout << "三角形的面积：" << t.getArea() << endl;
    cout << "三角形的周长：" << t.getPerimeter() << endl;

    return 0;
}
