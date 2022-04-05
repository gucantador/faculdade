# include <stdio.h>

int main (){

    int num, i;

    printf("Digite um numero para ver se eh primo: ");
    scanf("%i", &num);

    i = 2;

    while (num%i==0 && num!=i ){

        if (num%i==0){
            printf("numero nao primo");
        }

        else{
            printf("numero primo");
        }

        i = i +1;
    }


}
