#include <stdio.h>

int main()
{   
    int i,nota;
    for(i=0;i<=5;i++){
        printf("\nInforme a nota do aluno com matrícula %d: ",i);
        scanf("%d",&nota);

        if(nota>=6){
            printf("\nAluno %d Aprovado!",i);
        } else {
            printf("\nAluno %d Reprovado!",i);
        }
    }
    return 0;
}
