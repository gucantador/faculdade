#include <stdio.h>
 
int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    int rev = 0;
    while(n>0) {
        int lDigit = n%10;
        rev = (rev*10)+lDigit;
        n/=10;
    }
    printf("%i", rev);

    if (rev%2==0){
        printf("O numero eh par");
    }

    else{
        printf("O numero eh impar");
    }
}

