#include <stdio.h>

int main() {
    int n;
    float x,max,min;

    scanf("%d %f",&n,&x);
    max = x;
    min = x;

    while (n--) {
        scanf("%f",&x);
        if (x < min) { min = x; }
        if (x > max) { max = x; }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}