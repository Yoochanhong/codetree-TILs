#include <iostream>

int main() {
    int s, e, c = 0;
    std::cin >> s >> e;
    for (int i = s; i <= e; i++) {
        int k = 0;
        for (int l = 1; l < i; l++) {
            if (i % l == 0) k += l;
        }
        if (k == i) c++;
    }
    std::cout << c;
    return 0;
}