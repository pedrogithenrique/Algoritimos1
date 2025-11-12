// Escreva uma função que encontre uma célula com conteúdo mínimo. Faça duas versões: uma iterativa e uma recursiva

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

celula *minRec(celula *le)
{
    if (le == NULL)
    {
        return 0;
    }
    if (le->prox == NULL)
    {
        return le;
    }
    celula *min = minRec(le->prox);

    if (le->conteudo < min->conteudo)
    {
        return le;
    }
    else
    {
        return min;
    }
}

int main()
{
    /* code */
    return 0;
}
