/*Biblioteca/Cabeçalhos*/
# include <stdio.h> /*printf(), scanf()*/

/*Cole no prompt de comando a seguinte código (Lembre-se de estar no diretorio do local do arquivo com extensao .c e com o gcc instalado)*/
/*gcc desafio02.c -o desafio02.exe -Wall -pedantic -Werror*/
/*Apos colado aperte enter, o programa compilara e gerara um executavel*/
/*Agora cole este código abaixo no prompt de comando*/
/*desafio02.exe*/

/*Programa principal*/
int main(int argc, char *argv[])
{
    /*Valor2 é o 2° elemento anterior ao atual, que seria a soma dos dois anteriores
    Valor1 é o 1° elemento anterior ao atual*/
    int n, i,  valor1 = 1, valor2 = 0, atual = 0, encontrado = 0;
    printf("Insira o numero : ");
    scanf("%d", &n);

    /*Impressao dos dois primeiros valores da serie*/
    printf("\nSEQUENCIA DE FIBONACCI\n\n");
    printf("%d ", valor2);
    printf("%d ", valor1);

    for(i = 0; i < n; i++)
    {
        /*Pega o proximo valor da sequencia, somando os 2 anteriores*/
        atual = valor2 + valor1;

        /*Vai até o numero anterior ao numero n dado, caso este n nao exista na sequencia*/
        if(n < atual)
        {
            break;
        }
        printf("%d ", atual);
        
        /*Caso for igual, foi encontrado o numero n*/
        if(n == atual)
        {
            encontrado = 1;
            break;
        }

        /*Atualização dos 2 valores anteriores ao atual*/
        valor2 = valor1;
        
        /*Necessario receber o valor atual, senao nunca saira do mesmo numero*/
        valor1 = atual;
    }

    /*Impressao*/
    if(encontrado)
    {
        printf("Numero encontrado!");
    }
    else
    {
        printf("Numero nao encontrado!");
    }
    return 0;
}