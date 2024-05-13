#include <iostream>

int main() {
    int n, i = 0;
    double s = 0;
    while(std::cin >> n){
        if (n < 20 || n > 29) break;
        i++;
        s += n;
    }
    std::printf("%.2lf", s / i);
    return 0;
}