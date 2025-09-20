#include <iostream>

using namespace std;

class Circle {
public:
    int radius;
    Circle();
    ~Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "radius: " << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "radius: " << r << endl;
}

Circle::~Circle() {
    cout << "Circle::~Circle()" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle c1;
    Circle c2(30);
    cout << "Area of c1: " << c1.getArea() << endl;
    cout << "Area of c2: " << c2.getArea() << endl;
    return 0;
}
