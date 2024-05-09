#include <iostream>
typedef long long ll;
using namespace std;
int main() {
    ll s;
    cin >> s;
    ll l = 1, r = s, k = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        ll a = (1 + mid)  * mid / 2;
        if (s < a){
            r = mid - 1;
        } else {
            l = mid + 1;
            k = mid;
        }
    }
    cout << k;
    return 0;
}