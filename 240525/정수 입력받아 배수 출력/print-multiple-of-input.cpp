#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i <= n * 5; i += n){
        std::cout << i << " ";
    }
    return 0;
}