#include <stdio.h>

int main() {
    char word[64];
    int c, j, i = 0;
    int is_palindrome = 1;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            word[i++] = c;
        }
    }
    j = 0;
    i--;

    while (j < i) {
        if (word[j] != word[i]) {
            is_palindrome = 0;
            printf("no\n");
            break;
        }
        j++;
        i--;
    }

    if (is_palindrome) {
        printf("yes\n");
    }

    return 0;
}