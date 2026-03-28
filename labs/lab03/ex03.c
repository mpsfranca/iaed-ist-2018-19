#include <stdio.h>

void cruz(int n) {
    int start,end,i,j;
    start = 0;
    end = n - 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == start || j == end) {
                printf("*");
            } else {
                printf("-");
            }
            printf(" ");
        }
        start++;
        end--;
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d",&n);

    cruz(n);

    return 0;
}