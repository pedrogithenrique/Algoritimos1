// Estrutura de uma lista encadeada

#include <stdio.h>

typedef struct reg
{
    int conteudo;
    struct reg *prox;
} celula;

int main(void)
{
    printf("sizeof (celula) = %d\n", sizeof(celula));
    return 0;
}