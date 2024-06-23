#include <iostream>

int main() {
    std::string a;
    char b;
    int c = 0;
    std::cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (b == a[i]){
            c = i;
            break;
        }
    }
    std::cout << (c ? std::to_string(c) : "No");
    return 0;
}