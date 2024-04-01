/*int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?*/
/*Valor da soma é igual a 91*/
# include <stdio.h>

int main()
{
    /*Declarações*/
    int indice = 13, soma = 0, k = 0;

    /*Loop*/
    /*Saída da condição após ser == a 13*/
    while(k < indice)
    {
        k += 1;
        soma += k;
    }
    /*Impressão da soma*/
    printf("Valor da soma : %d\n", soma);
    return 0;
}
