#include <iostream>
using namespace std;


class Rectangle {
public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea() {
    return width * height;
}

int main() {
    Rectangle rect;
    rect.width = 4;
    rect.height = 3;
    cout<< "Area is " << rect.getArea() << endl;
}