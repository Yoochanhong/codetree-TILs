#include <iostream>

int main() {
    int a, b;
    std:: cin >> b >> a;
    for (int i = b; i >= a; i--){
        if (i % 2) std::cout << i << " ";
    }
    return 0;
}