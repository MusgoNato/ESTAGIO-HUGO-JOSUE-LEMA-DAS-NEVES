/*Bibliotecas/Cabeçalhos*/
# include <stdio.h> /*printf()*/
# include <string.h> /*strlen()*/

/*Cole no prompt de comando a seguinte código (Lembre-se de estar no diretorio do local do arquivo com extensao .c e com o gcc instalado)*/
/*gcc desafio05.c -o desafio05.exe -Wall -pedantic -Werror*/
/*Apos colado aperte enter, o programa compilara e gerara um executavel*/
/*Agora cole este código abaixo no prompt de comando*/
/*desafio02.exe*/

/*Programa principal*/
int main(int argc, char *argv[])
{
    char string[] = "hugo", troca;
    int i, tam = 0;

    /*Tamanho maximo da string*/
    tam = strlen(string);

    /*Varredura da string*/
    /*É necessario percorrer até a metade da string, caso contrario as trocas serao feitas novamente nas mesmas posições, resultando na string inicial*/
    for(i = 0; i < tam/2; i++)
    {
        /*Faz a troca caractere por caractere para a string original*/
        troca = string[i];
        string[i] = string[tam - i - 1];
        string[tam - i - 1] = troca;    
   }

   /*Impressão*/
   printf("%s", string);
   return 0;
}