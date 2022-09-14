#include <stdio.h>

int main(){
    int matriz[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int num, posi1, posi2;

    printf("Digite um numero: ");
    scanf("%i" , &num);

    for (posi1 = 0; posi1 < 3; posi1++){
        for (posi2 = 0; posi2 < 3; posi2++){
            if (matriz[posi1][posi2] == num) {
                printf("Encontrado");
                break;
            }
        if (matriz[posi1][posi2] == num) {
            printf("Encontrado!");
            break;
        } 
        }
    }



}