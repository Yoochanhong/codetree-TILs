#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = 0;
    while (a != b) {
        c++;
        a.insert(0, 1, a.back());
        a.pop_back();
    }
    cout << c;
    return 0;
}