#include <stdio.h>

int main() {
    int n,i;
    float temp, sum = 0;

    scanf("%d",&n);
    i = n;
    while (i--) {
        scanf("%f",&temp);
        sum += temp;
    }

    printf("%.2f\n", sum / n);

    return 0;
}