#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> l;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> l.emplace_back();
    }
    for (int i = n - 1; i >= 0; i--){
        if (l[i] % 2 == 0) cout << l[i] << " ";
    }
    return 0;
}