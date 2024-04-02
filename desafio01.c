/*Valor da soma é igual a 91*/
/*Biblioteca/Cabeçalhos*/
# include <stdio.h>

/*Programa principal*/
int main(int argc, char *argv[])
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
