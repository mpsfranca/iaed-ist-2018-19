#include <stdio.h>

int max_of_three(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    }
    if (y > z) {
        return y;
    }
    return z;
}

int main() {
    int x,y,z;

    /* Get user input */
    scanf("%d %d %d",&x,&y,&z);

    printf("%d\n", max_of_three(x,y,z));

    return 0;
}