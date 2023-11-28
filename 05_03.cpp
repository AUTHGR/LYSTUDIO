#include <iostream>
using namespace std;
//定义点
class Point {
private:
    double x;
    double y;
//创立点坐标
public:
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    void displayPoint() {
        cout << "坐标：(" << x << ", " << y << ")" << endl;
    }

    void setPoint(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }
};

class Rectangle : public Point {
private:
    double length;
    double width;
//创立长度、宽度
public:
    Rectangle(double xCoord, double yCoord, double len, double wid) : Point(xCoord, yCoord) {
        length = len;
        width = wid;
    }

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double x, y, length, width;
    cout << "请输入矩形的左上角坐标(以空格切换数字)：" << endl;
    cin >> x >> y;
    cout << "请输入矩形的长度：" << endl;
    cin >>length;
    cout << "请输入矩形的宽度：" << endl;
    cin >>width;
    Rectangle rectangle(x, y, length, width);
    rectangle.displayPoint();
    cout << "矩形的面积为：" << rectangle.getArea() << endl;
    cout << "矩形的周长为：" << rectangle.getPerimeter() << endl;

    return 0;
}
