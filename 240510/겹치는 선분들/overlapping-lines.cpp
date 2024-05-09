#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, c = 0;
    char b;
    vector<pair<int, int>> l;
    cin >> n >> k;
    for (int i = 0, a; i < n; i++) {
        cin >> a >> b;
        if (b == 'L') {
            l.emplace_back(c - a, 1);
            l.emplace_back(c, -1);
            c -= a;
        } else {
            l.emplace_back(c, 1);
            l.emplace_back(c + a, -1);
            c += a;
        }
    }
    sort(l.begin(), l.end());
    int r = 0, s = 0;
    for (auto [v, w]: l) {
        r += w;
        if (r >= k) s++;
    }
    cout << s;
    return 0;
}