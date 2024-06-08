#include <iostream>

int main() {
    int n, c = 0, s = 0;
    std::cin >> n;
    while(c < 2) {
        s += n;
        std::cout << s << " ";
        if (s % 5 == 0) c++;
    }
    return 0;
}