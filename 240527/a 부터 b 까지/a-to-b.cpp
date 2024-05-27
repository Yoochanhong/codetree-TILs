#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    while(a <= b){
        std::cout << a << " ";
        if (a % 2) a <<= 1;
        else a += 3; 
    }
    return 0;
}