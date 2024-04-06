#include <iostream>

int main() {
    //lesson 12.5.1
    /*
    std::string tenants[5];
    std::cout << "Input 5 tenants:" << std::endl;
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
    */

   //lesson 12.5.2
    std::cout << "Input 10 float numbers:" << std::endl;
    float arr[10];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cin >> arr[i];
    }
    
    for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i > 0; i--) {
        int minIndex = i;
        for (int k = 0; k < i; k++) {
            if (arr[k] < arr[minIndex]) {
                minIndex = k;
            }
        }
        if (arr[i] > arr[minIndex]) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    // 1.2 -1 15.8 9.4 8.1 -7.3 6.4 18 10 11.155
    


}