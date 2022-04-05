# include <stdio.h>

int main (){

    int num, i;

    printf("Digite um numero para ver se é primo: ");
    scanf("%i", &num);

    i = 2;

    while (num%i==0 && num!=i ){

        printf("Numero nao primo");
        num = num +1;
    }

printf("Numero primo");

}