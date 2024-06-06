#include <iostream>

int main() {
    int s, e, r = 0;
    std::cin >> s >> e;
    for (int i = s; i <= e; i++) {
        int c = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) c++;
        }
        if (c == 3) r++;
    }
    std::cout << r;
    return 0;
}