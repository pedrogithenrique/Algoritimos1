// Escreva uma função que faça uma busca em uma lista encadeada crescente. Faça versões recursiva e iterativa.

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

celula *buscaCrescenteRec(int x, celula *le)
{
    if (le == NULL || le->conteudo > x)
    {
        return 0;
    }
    if (le->conteudo == x)
    {
        return le;
    }
    return buscaCrescenteRec(x, le->prox);
}

celula *buscaCrescenteIte(int x, celula *le)
{
    celula *p = le;
    while (p != NULL && p->conteudo != x)
    {
        if (p->conteudo > x)
        {
            return NULL;
        }

        p = p->prox;
    }
    return p;
}

int main()
{
    /* code */
    return 0;
}
