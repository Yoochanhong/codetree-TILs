#include <iostream>

int main() {
    std::string a;
    char b;
    int c = -1;
    std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (b == a[i]){
            c = i;
            break;
        }
    }
    std::cout << (c > -1 ? std::to_string(c) : "No");
    return 0;
}