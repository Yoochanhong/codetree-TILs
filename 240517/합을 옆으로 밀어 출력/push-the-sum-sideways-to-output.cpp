#include <iostream>

int main() {
    int n, a, s = 0;
    std::cin >> n;
    while(n--){
        std::cin >> a;
        s += a;
    }
    auto s1 = std::to_string(s);
    for (int i = 1; i < s1.length(); i++){
        std::cout << s1[i];
    }
    std::cout << s1[0];
    return 0;
}