#include <iostream>
#include <cstring>

int main() {
    char password[11];

    std::cout << "input password" << std::endl;

    while(true) {
        std::cout << "password: ";
        std::cin >> password;

        if(std::strcmp(password, "C++") == 0) {
            std::cout << "exit" << std::endl;
            break;
        } else {
            std::cout << "its wrong" << std::endl;
        }
    }

    return 0;
}