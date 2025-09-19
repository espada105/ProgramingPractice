#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "Area is " << radius << endl;
}
Circle::Circle(int r) {
    radius = r;
    cout << "Area is " << radius << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut.getArea(): " << donut.getArea() << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza.getArea(): " << pizza.getArea() << endl;

    Circle circle(20);
    area = circle.getArea();
    cout << "circle.getArea(): " << circle.getArea() << endl;
}
