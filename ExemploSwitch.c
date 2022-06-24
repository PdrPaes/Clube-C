#include <stdio.h>

int main()
{
    printf("---Menu de Cores---");
    printf("\n1 - Branco");
    printf("\n2 - Azul");
    printf("\n3 - Vermelho");
    printf("\n4 - Amarelo");
    printf("\n5 - Verde");
    
    int entrada;
    
    printf("\nSelecione uma cor da lista acima: ");
    scanf("%d",&entrada);
    
    switch(entrada){

        case 1:
            printf("\n\tA cor selecionada foi Branco!");
        break;

        case 2:
            printf("\n\tA cor selecionada foi Azul!");
        break;

        case 3:
            printf("\n\tA cor selecionada foi Vermelho!");
        break;

        case 4:
            printf("\n\tA cor selecionada foi Amarelo!");
        break;

        case 5:
            printf("\n\tA cor selecionada foi Verde!");
        break;

        default:
            printf("\nOpção Inválida!");
        break;
    }
    return 0;

}
