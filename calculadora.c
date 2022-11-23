#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int num1, num2;
    int opcao;

    printf("--------CALCULADORA------------");
    printf("\nDigite o primeiro numero:");
            scanf("\n%d", &num1);
            printf("\nDigite o segundo numero:");
            scanf("\n%d", &num2);

    
       
        printf("digite uma opção:");
        printf("\nsomar -  1");
        printf("\nsubtrair -  2");
        printf("\nmultiplicar - 3");
        printf("\ndividir - 4");
    
        scanf("\n%d", &opcao);
    
    
        switch (opcao){
            case 1:
                printf("\n A soma de %d e %d = %d", num1, num2 , num1 + num2 );
            break;
                break;
            case 2:
                 printf("\n A subtração de %d e %d = %d", num1, num2, num1 - num2 );
            break;
                break;
            case 3:
                printf("\n A multiplicação de %d e %d = %d", num1, num2, num1 * num2 );
            break;
                break;
            case 4:
                printf("\n A divisão de %d e %d = %d", num1, num2,  num1 / num2 );
            break;
        default:
        
                printf("opao invalida");
                break;


        }
    }





    