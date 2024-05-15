#include <iostream>

int main() {
    int sum = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0, a; j < 4; j++){
            std::cin >> a;
            if (j <= i) sum += a;
        }
    }
    std::cout << sum;
    return 0;
}