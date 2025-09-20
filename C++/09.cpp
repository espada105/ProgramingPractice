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
    cout << "half is " << "radius: " << radius << endl;
}

Circle::~Circle() {
    cout << "Circle deleted" << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "half is " << "radius: " << radius << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}

int main() {
    Circle mainDonut;
    Circle mainPizza(30);
    f();
}