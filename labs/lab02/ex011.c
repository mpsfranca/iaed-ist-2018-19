#include <stdio.h>

int min_of_two(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;
}

int max_of_two(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

int main() {
    int x,y;

    scanf("%d %d",&x,&y);

    printf("%d\n%d\n",min_of_two(x,y),max_of_two(x,y));

    return 0;
}