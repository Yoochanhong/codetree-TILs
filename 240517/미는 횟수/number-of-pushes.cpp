#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = 0;
    string d = a;
    while (d != b) {
        if (c >= a.length()) {
            c = -1;
            break;
        }
        c++;
        d.clear();
        for (int i = c; i < a.length(); i++) d += a[i];
        for (int i = 0; i < c; i++) d += a[i];
    }
    cout << c;
    return 0;
}