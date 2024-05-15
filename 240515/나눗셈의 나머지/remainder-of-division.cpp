#include <iostream>

int main() {
    int a, b, c[1001] = {};
    std::cin >> a >> b;
    while(a){
        c[a % b]++;
        a /= b;
    }
    int s = 0;
    for (int i = 0; i <= 1000; i++){
        s += 1 * c[i] * c[i];
    }
    std::cout << s;
    return 0;
}