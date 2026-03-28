#include <stdio.h>

int lelinha(char s[]) {
    int c,i=0;

    while ((c=getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    return i;
}

int main() {
    char word[64];

    lelinha(word);

    printf("%s\n",word);

    return 0;
}