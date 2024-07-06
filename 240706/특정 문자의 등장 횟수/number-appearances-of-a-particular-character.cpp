#include <iostream>
using namespace std;

int main() {
    string a;
    int b = 0, c = 0;
    cin >> a;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == 'e' && a[i + 1] == 'e') b++;
        if (a[i] == 'e' && a[i + 1] == 'b') c++;
    }
    cout << b << ' ' << c;
    return 0;
}