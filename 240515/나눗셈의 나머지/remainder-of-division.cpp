#include <iostream>

int main() {
    int a, b, c[1001] = {};
    std::cin >> a >> b;
    while(a > 1){
        c[a % b]++;
        a /= b;
    }
    int s = 0;
    for (int i = 0; i < b; i++){
        s += c[i] * c[i];
    }
    std::cout << s;
    return 0;
}