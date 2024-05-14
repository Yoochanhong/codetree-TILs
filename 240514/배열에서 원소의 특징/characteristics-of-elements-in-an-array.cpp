#include <iostream>

int main() {
    int a[10];
    for (int i= 0; i < 10; i++){
        std::cin >> a[i];
    }
    for (int i = 0; i < 10; i++){
        if (a[i] % 3 == 0){
            std::cout << a[i - 1];
            break;
        }
    }
    return 0;
}