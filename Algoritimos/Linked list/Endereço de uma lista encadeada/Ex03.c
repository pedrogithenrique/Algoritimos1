// Escreva uma função que calcule a profundidade de uma dada célula

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

int contaProfundiade(celula *Le, celula *c)
{
    //Caso a lista seja Vazia
    if (Le == NULL)
    {
        return -1;
    }
    //Caso C estaja na primeira posição da lista
    if (Le == c)
    {
        return 0;
    }
    //Procura c no restante da lista
    int profundidade = contaProfundidade(Le->prox, c);


    if (profundidade == -1)
    {
        return -1;
    }

    return 1 + profundidade;
}

int main()
{

    return 0;
}
