#include <stdio.h>

#define VECMAX 100

int main() {
    int i,j,n,vector[VECMAX];

    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        scanf("%d",&vector[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < vector[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}