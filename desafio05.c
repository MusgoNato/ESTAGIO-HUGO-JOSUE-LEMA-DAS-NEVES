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
/*As IAs tem se desenvolvido muito nos ultimos anos, não é algo novo, mas com o passar do tempo, estas foram evoluindo radicalmente, e pode-se dizer que não chegaram no ápice ainda.
Há diversas preocupações com relação as IAs substituir empregos ou atrapalhar processos de aprendizados, como nas escolas e em outros lugares acadêmicos. Os impactos que elas causam são bem significativos, mas deve-se enxergar como uma ferramenta e não como algo propício a substituir empregos ou atrapalhar algum meio de ensino. Na programação hoje, a diversos problemas que uma pessoa não é capaz de resolver, as vezes consegue, mas exige muito tempo e dedicação, em meio aos tempos de hoje onde tudo é de certa forma imediata, resolver um problema que demanda muito tempo é deixado de lado ou dado a equipes maiores, como no caso da programação. Existem varias tarefas que demandam muita capacidade fisica ou intelectual de um trabalhador, as IAs estão para auxiliar nesses casos, aonde encurtam o tempo de um trabalho muito desgastante, garantindo a qualidade de um serviço ou produto que se está trabalhando. No futuro próximo, as IAs devem ser parte de um processo evolutivo continuo junto com a humanidade, assim como esta sendo desde parte da sua criação. Portanto, é essencial atualizar-se sobre as IAs do mercado e evoluir junto com elas, adaptando-se em situações onde deva-se usar, mas colocando na consciência que IAs são ferramentas para qualquer tipo de serviço. */