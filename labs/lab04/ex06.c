#include <stdio.h>

int lelinha(char s[]) {
    int c,i=0;

    while ((c=getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    return i;
}

void maiusculas(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] <= 'z' && s[i] >= 'a') {
            s[i] = s[i] - 32;
        }
        i++;
    }
}

int main() {
    char word[64];

    lelinha(word);

    maiusculas(word);

    printf("%s\n",word);

    return 0;
}