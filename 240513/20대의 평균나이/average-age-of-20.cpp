#include <iostream>

int main() {
    int n, s = 0, i = 0;
    while(std::cin >> n){
        if (n >= 30) break;
        i++;
        s += n;
    }
    std::printf("%.2lf", (double)s / i);
    return 0;
}