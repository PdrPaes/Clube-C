#include <stdio.h>

int ePos(int a){
    if(a>=0){
        printf("O valor informado e positivo.");
    } else {
        printf("O valor informado e negativo.");
    }
}

int main(){
    int valor;

    printf("Informe o valor desejado: ");
    scanf("%d",&valor);

    ePos(valor);
}