# include <stdio.h>
# include <string.h>
# define MAX_ELEMENTOS 50

int main(int argc, char *argv[])
{
    char string[] = "hugo";
    int i;
    /*Pega o ultimo caractere
    letra2 = string[tam - 1];*/

    /*Loop que comeca do final da string*/
    for(i = strlen(string) - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    return 0;   
}