#include <iostream>

using namespace std;

int main() {
    char a[30];
    scanf("%s", a);
    printf("010-");
    for (int i = 9; i < 13; i++) printf("%c", a[i]);
    printf("-");
    for (int i = 4; i < 8; i++) printf("%c", a[i]);
    return 0;
}