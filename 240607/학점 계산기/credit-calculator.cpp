#include <iostream>

int main() {
    int n;
    double s, a;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        s += a;
    }
    printf("%.1lf\n%s", s / n, s / n >= 4.0 ? "Perfect" : s / n >= 3.0 ? "Good" : "Poor");
    return 0;
}