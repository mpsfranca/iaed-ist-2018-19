#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

float get_number(int *current_char) {
    int decimal = 0;
    float number = 0.0f, divide_by = 10.0f;

    while (((*current_char = getchar()) != '+' && *current_char != '-' && *current_char != 'i'))
    {
        if (*current_char == '.') { 
            decimal = 1; 
            continue;
        }
        if (decimal) {
            number += ((*current_char - '0') / divide_by);
            divide_by *= 10.0f;
        } else {
            number *= 10;
            number += *current_char - '0';
        }
    }
    return number;
}

float get_real(int *current_char) {
    return get_number(current_char);
}

float get_imaginary(int *current_char) {
    int mult_factor = (*current_char == '-') ? -1 : 1;
    return get_number(current_char) * mult_factor;
}

int main() {
    int c;
    Complex n1,n2,result;

    n1.real = get_real(&c);
    n1.imaginary = get_imaginary(&c);

    /* Discards space between the two numbers */
    getchar();
    
    n2.real = get_real(&c);
    n2.imaginary = get_imaginary(&c);

    result.real = n1.real + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;

    printf("%.2f",result.real);
    if (result.imaginary > 0) {
        printf("+");
    }
    printf("%.2fi\n",result.imaginary);

    return 0;
}