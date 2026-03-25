#include <stdio.h>

int main() {
    int a,b,c,min,mid,max;

    scanf("%d %d %d",&a,&b,&c);

     if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            mid = b; max = c;
        } else {
            mid = c; max = b;
        }
    } else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a; max = c;
        } else {
            mid = c; max = a;
        }
    } else {
        min = c;
        if (a <= b) {
            mid = a; max = b;
        } else {
            mid = b; max = a;
        }
    }

    printf("%d %d %d\n", min, mid, max);

    return 0;
}