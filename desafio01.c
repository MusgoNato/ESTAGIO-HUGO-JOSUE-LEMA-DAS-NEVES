/*Valor da soma é igual a 91*/
/*Biblioteca/Cabeçalhos*/
# include <stdio.h>

/*Cole no prompt de comando a seguinte código (Lembre-se de estar no diretorio do local do arquivo com extensao .c e com o gcc instalado)*/
/*gcc desafio01.c -o desafio01.exe -Wall -pedantic -Werror*/
/*Apos colado aperte enter, o programa compilara e gerara um executavel*/
/*Agora cole este código abaixo no prompt de comando*/
/*desafio02.exe*/

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
