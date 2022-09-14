#include <stdio.h>

//Faça um programa que leia 3 números e:

//Verifique se são iguais e caso não sejam, imprima em ordem crescente os 3 números.

int main(){

    int num1, num2, num3;

    printf("Digite 3 numeros diferentes\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);

    if (num1 == num2 || num1 == num3 || num2==num3){
        printf("Os numeros sao iguais, voce nao fez o que foi pedido");
    }

    else if(num1>num2 && num2>num3){
        printf("%i %i %i", num3, num2, num1);
    }

    else if(num3>num2 && num2>num1){
        printf("%i %i %i", num1, num2, num3);
    }

    else if(num2>num3 && num3>num1){
        printf("%i %i %i", num1, num3, num2);
    }
        
    else if(num2>num1 && num1>num3){
        printf("%i %i %i", num3, num1, num2);
    }
}
    