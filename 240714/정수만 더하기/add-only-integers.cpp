#include <iostream>
using namespace std;

int main() {
    int c = 0;
    string s;
    cin >> s;
    for (auto i : s) {
        if (i >= 48 && i <= 57) c += i - 48;
    }
    cout << c;
    return 0;
}