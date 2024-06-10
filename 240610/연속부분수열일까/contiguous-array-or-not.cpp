#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int n, m;
    string a, b;
    cin >> n >> m;
    for (int i = 0, c; i < n; i++) {
        cin >> c;
        a += to_string(c);
    }
    for (int i = 0, c; i < m; i++) {
        cin >> c;
        b += to_string(c);
    }
    cout << (a.find(b) == string::npos ? "No" : "Yes");
    return 0;
}