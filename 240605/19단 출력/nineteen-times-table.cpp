#include <iostream>

int main() {
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 19; j++){
            std::cout << i << " * " << j << " = " << i * j;
            std::cout << (j % 2 && j < 19 ? " / " : "\n");
        }
    }
    return 0;
}