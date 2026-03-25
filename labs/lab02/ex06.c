#include <stdio.h>

int main() {
    int n,count,sum;
    count = 0;
    sum = 0;

    scanf("%d",&n);

    while (n) {
        count++;
        sum += n%10;
        n /= 10;
    }

    printf("%d\n%d",count,sum);

    return 0;
}