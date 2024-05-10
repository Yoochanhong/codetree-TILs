#include <iostream>

using namespace std;

int main() {
    int n, i = 2;
    cin >> n;
    while (n) {
        if (n % i == 0) {
            n /= i;
            cout << i << "\n";
        } else i++;
        if (n < i) break;
    }
    return 0;
}