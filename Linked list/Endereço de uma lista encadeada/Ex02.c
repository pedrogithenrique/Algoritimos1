// Escreva uma função que calcule a altura de uma dada célula.

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

int contaAltura(celula *c)
{
    if (c == NULL)
    {
        return 0;
    }

    return 1 + contaAltura(c->prox);
}

int main()
{

    return 0;
}
