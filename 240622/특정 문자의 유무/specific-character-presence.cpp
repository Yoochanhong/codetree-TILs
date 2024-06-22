#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char a[21];
    cin >> a;
    auto b = strstr(a, "ee");
    auto c = strstr(a, "eb");

    cout << (b == nullptr ? "No" : "Yes") << " ";
    cout << (c == nullptr ? "No" : "Yes");
    return 0;
}