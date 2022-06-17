#include <stdio.h>

int main() {
    float a,b,c;
    printf("----------------------------");
    printf("\n---Calculadora Embaixador---");
    printf("\n----------------------------");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\n5 - Raiz Quadrada");
    printf("\n6 - Potenciação");
    printf("\n7 - Area Retangular");
    printf("\n8 - Area Triangulo");
    printf("\n9 - Seno");
    printf("\n10 - Cosseno");
    
    int selecao;
    printf("\nSelecione a opção desejada: ");
    scanf("%d",&selecao);
    
    switch(selecao){
        case 1:
            printf("\n\n\t Você escolheu a calculadora de Soma!");
            printf("\n\tInforme o primeiro valor: ");
            scanf("%f",&a);
            printf("\n\tInforme o segundo valor: ");
            scanf("%f",&b);
            printf("\n\t\tA soma dos Valores equivale a: %.2f",a+b);
            break;
        
        
        case 2:
            printf("\n\n\t Você escolheu a calculadora de Subtração!");
            printf("\n\tInforme o primeiro valor: ");
            scanf("%f",&a);
            printf("\n\tInforme o segundo valor: ");
            scanf("%f",&b);
            printf("\n\t\tA subtração dos Valores equivale a: %.2f",a-b);
            break;
        
        
        case 3:
            printf("\n\n\t Você escolheu a calculadora de Multiplicação!");
            printf("\n\tInforme o primeiro valor: ");
            scanf("%f",&a);
            printf("\n\tInforme o segundo valor: ");
            scanf("%f",&b);
            printf("\n\t\tO produto dos Valores equivale a: %.2f",a*b);
            break;
        
        
        case 4:
            printf("\n\n\t Você escolheu a calculadora de Divisão!");
            printf("\n\tInforme o primeiro valor: ");
            scanf("%f",&a);
            printf("\n\tInforme o segundo valor: ");
            scanf("%f",&b);
            while(b==0){
                printf("\n\t Opção Inválida, informe o segundo valor novamente: ");
                    scanf("%f",&b);
            }
            printf("\n\t\tA soma dos Valores equivale a: %.2f",a/b);
            break;
        
        case 5:
            printf("\n\n\t Você escolheu a calculadora de Raizes Quadradas!");
             printf("\n\tInforme o valor: ");
            scanf("%f",&a);
            while(a<0){
                printf("\n\t Opção Inválida, informe o valor novamente: ");
                    scanf("%f",&a);
            }
            printf("\n\tA raiz quadrada de %.2f equivale a %.2f",a,sqrt(a));
            break;
        
        case 6:
            printf("\n\n\t Você escolheu a calculadora de Potenciação!");
            printf("\n\tInforme o primeiro valor: ");
            scanf("%f",&a);
            printf("\n\tInforme o segundo valor: ");
            scanf("%f",&b);
            printf("\n\tO resultado de %.2f elevado a %.2f equivale a %.2f",a,b,pow(a,b));
            break;
        
        case 7:
            printf("\n\n\t Você escolheu a calculadora de Area Retangular!");
            printf("\n\tInforme a largura: ");
            scanf("%f",&a);
            printf("\n\tInforme o altura: ");
            scanf("%f",&b);
            printf("\n\tA area do retangulo informado equivale a %.2f",a*b);
            break;
        
        case 8:
            printf("\n\n\t Você escolheu a calculadora de Area do Triangulo!");
            printf("\n\tInforme a largura: ");
            scanf("%f",&a);
            printf("\n\tInforme o altura: ");
            scanf("%f",&b);
            printf("\n\tA area do triangulo informado equivale a %.2f",(a*b)/2);
            break;
        
        case 9:
            printf("\n\n\t Você escolheu a calculadora de Seno!");
            printf("\n\tInforme o valor: ");
            scanf("%f",&a);
            printf("\n\tO seno do valor informado equivale a: %.3f",sin(a));
            break;
        
        case 10:
            printf("\n\n\t Você escolheu a calculadora de Cosseno!");
            printf("\n\tInforme o valor: ");
            scanf("%f",&a);
            printf("\n\tO cosseno do valor informado equivale a: %.3f",cos(a));
            break;
                        
        default:
            printf("\nOpção Invalida!");
            break;
    }
    return 0;
}
