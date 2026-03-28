#include <stdio.h>

#define VECMAX 100

int main() {
    int i,j,n,max,vector[VECMAX];

    max = 0;

    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
        if (vector[i] > max) {
            max = vector[i];
        }
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (vector[j] - i > 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}