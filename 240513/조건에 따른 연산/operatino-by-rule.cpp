#include <iostream>

int main() {
    int n, i = 0;
    std::cin >> n;
    while(n < 1000){
        i++;
        if (n % 2 == 0) n = n * 3 + 1;
        else n = n * 2 + 2;
    }
    std::cout << i;
    return 0;
}