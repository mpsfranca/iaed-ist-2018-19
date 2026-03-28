#include <stdio.h>

#define SIZE_PORTFOLIO 1000
#define NAME_SIZE 10

typedef struct {
    char nome[NAME_SIZE];
    float valor;
    float rendimento_anual;
} Stock;

float rendimento_titulo(Stock s) {
    return s.valor * (s.rendimento_anual/100);
}

int main() {
    int i,n,rendimento = 0, titulo_atual = 0;
    Stock portfolio[SIZE_PORTFOLIO];
    Stock titulo_maior_rendimento;

    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        scanf("%s %f %f",portfolio[i].nome,&portfolio[i].valor,&portfolio[i].rendimento_anual);
    }

    for (i = 0; i < n; i++) {
        float rendimento_titulo_atual = rendimento_titulo(portfolio[i]); if (rendimento_titulo_atual > rendimento) { 
            rendimento = rendimento_titulo_atual; 
            titulo_atual = i;
        }
    }

    titulo_maior_rendimento = portfolio[titulo_atual];

    printf("%s %.2f %.2f",titulo_maior_rendimento.nome,titulo_maior_rendimento.valor,titulo_maior_rendimento.rendimento_anual);

    return 0;
}