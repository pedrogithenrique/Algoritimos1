//Escreva uma função que verifique se uma lista encadeada que contém números inteiros está em ordem crescente.

#include <stdio.h>

typedef struct reg celula;

struct reg
{
    int conteudo;
    celula *prox;
};

celula* crescente(celula* le){
    if (le == NULL || le->prox == NULL)
    {   
        return 1;
    }

    if (le->conteudo > le->prox->conteudo)
    {
        return 0;
    }
    
    return crescente(le->prox);
}

int main()
{
    /* code */
    return 0;
}
