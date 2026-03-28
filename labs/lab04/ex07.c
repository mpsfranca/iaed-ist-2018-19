#include <stdio.h>

int lelinha(char s[]) {
    int c,i=0;

    while ((c=getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    return i;
}

void apagaCaracter(char s[], char c) {
    int check = 0, write = 0;
    while (s[check] != '\0') {
        if (s[check] != c) {
            s[write] = s[check];
            write++;
            check++;
        } else {
            check++;
        }
    }

    while (write <= check) {
        s[write++] = '\0';
    }
}

int main() {
    char word[64];

    lelinha(word);

    apagaCaracter(word, getchar());

    printf("%s\n",word);

    return 0;
}