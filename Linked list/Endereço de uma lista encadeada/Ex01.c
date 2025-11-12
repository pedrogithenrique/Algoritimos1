// Escreva uma função que conte o número de células de uma lista encadeada. Faça duas versões: uma iterativa e uma recursiva.

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

int contaCelulaRec(celula *Le)
{
    if (Le == NULL){
        return 0;
    }
    return 1 + contaCelulaRec(Le->prox);
}

int contaCelulaIte(celula *Le)
{
    celula *p;
    int contador = 0;
    for (p = Le; p != NULL; p = p->prox)
    {
        contador++;
    }
    return contador;
}

int main()
{

    return 0;
}
