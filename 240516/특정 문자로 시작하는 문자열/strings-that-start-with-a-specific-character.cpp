#include <iostream>

int main() {
    int n, a[26] = {};
    double c[26] = {};
    char d;
    std::cin >> n;
    std::string b;
    for (int i = 0; i < n; i++){
        std::cin >> b;
        int x = b.front() - 65;
        a[x]++;
        c[x] += b.length();
    }
    std::cin >> d;
    std::printf("%d %.2lf", a[d - 65], c[d - 65] / a[d - 65]);
    return 0;
}