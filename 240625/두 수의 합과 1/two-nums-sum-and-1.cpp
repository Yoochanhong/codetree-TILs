#include <iostream>

using namespace std;

int main() {
    int a, b, d = 0;
    cin >> a >> b;
    string c = to_string(a + b);
    for (auto i : c) {
        if (i == 49) d++;
    }
    cout << d;
    return 0;
}