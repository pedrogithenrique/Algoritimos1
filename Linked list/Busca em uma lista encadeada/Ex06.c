#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

celula *comparaLista(celula *le1, celula *le2)
{
    if (le1 == NULL && le2 == NULL)
    {
        return 1;
    }

    if (le1 == NULL || le2 == NULL)
    {
        return 0;
    }

    if (le1->conteudo != le2->conteudo)
    {
        return 0;
    }

    return comparaLista(le1->prox, le2->prox);
}

int main()
{
    /* code */
    return 0;
}
