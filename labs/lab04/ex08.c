#include <stdio.h>

int main() {
    int i = 0;
    char x[1000], y[1000];

    scanf("%s %s",x,y);

    while (x[i] != '\0' && y[i] != '\0') {
        if (x[i] > y[i]) {
            printf("%s\n", x);
            return 0;
        }
        else if (x[i] < y[i]) {
            printf("%s\n", y);
            return 0;
        }
        i++;
    }
    printf("%s\n", x);

    return 0;
}