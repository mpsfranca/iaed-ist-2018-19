#include <stdio.h>

int main() {
    int current_char,current_number = 0;

    while ((current_char = getchar()) != EOF) {
        if (current_char == ' ' || current_char == '\n') {
            printf("%d%c",current_number,current_char);
            current_number = 0;
        } else if (current_char >= '0' && current_char <= '9') {
            current_number *= 10;
            current_number += current_char - '0';

        }
    }
    printf("%d\n",current_number);    

    return 0;
}