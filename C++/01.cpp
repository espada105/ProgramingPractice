#include <iostream>

double area(int r);

double area(int r) {
    return r * r * 3.14;
}

int main() {
    int n = 3;
    char c = 'a';
    std::cout << c << 5.5 << '-' << n << 'hello' << true << std::endl;
    std::cout << 'n + 5' << n + 5 << '\n' << area(n) << 'hello' << std::endl;
    std::cout << "area is " << area(n) << 'hello' << std::endl;
}

//
// #include <iostream>
//
// double area(int r);
//
// double area(int r) {
//     return r * r * 3.14;
// }
//
// using namespace std;
// int main() {
//     int n = 3;
//     char c = 'a';
//     cout << c << 5.5 << '-' << n << 'hello' << true << endl;
//     cout << 'n + 5' << n + 5 << '\n' << area(n) << 'hello' << endl;
//     cout << "area is " << area(n) << 'hello' << endl;
// }