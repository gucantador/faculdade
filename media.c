#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, contador, qtdade;
    printf("Quantos numeros vai digitar?");
    scanf("%i", &qtdade);
    float nums[qtdade];
        
    for (contador = 0; contador < qtdade; contador++){
        printf("Digite um valor positivo:");        
        scanf("%f", &nums[contador]);
        contador = contador + 1;
    }
    printf("teste");
    for (contador = 0; contador <= qtdade; contador++){
        printf("%f\n", nums[contador]);
    }
printf("acabou");
}