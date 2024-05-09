#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> l(n * 2);
    while(n--){
       cin >> a >> b;
       l.emplace_back(a, 1);
       l.emplace_back(b, -1);
    }
    sort(l.begin(), l.end());
    int r = 0, s = 0;
    for (auto [v, w] : l){
        s += w;
        r = max(r, s);
    }
    cout << r;
    return 0;
}