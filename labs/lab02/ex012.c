#include <stdio.h>

int divides(int x, int y) {
    if (x % y == 0) return 1;
    return 0;
}

int main() {
    int n,m;

    scanf("%d %d",&n,&m);

    if (divides(n,m)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}