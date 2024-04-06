#include <iostream>

int main() {
    //lesson 12.5.1
    std::string tenants[5];
    std::cout << "Input 10 tenants:" << std::endl;
    for (int i = 0; i < sizeof(tenants) / sizeof(tenants[0]); i++) {
        std::cin >> tenants[i];
    }
    while (true) {
        int number;
        std::cout << "Apartment number (0 to exit):" << std::endl;
        std::cin >> number;
        if (number == 0) break;
        if (number >= 1 && number <= sizeof(tenants) / sizeof(tenants[0])) {
            std::cout << tenants[number-1] << std::endl;
        } else {
            std::cout << "Incorrect number!" << std::endl;
        }
    }

}