#include <stdio.h>

int main(){
    int matriz[4][4]={
        {2,3,20,5},
        {2,4,6,5},
        {0,3,0,4},
        {2,4,8,6}};

    int i=0, j=0, marcador = 0, soma=0, somas[4];

    // i=0 e j subindo
    for (i=0; i<4; i++){   
        marcador = 0;
        soma = 0;
        for (j=0; j<4; j++){
            if (matriz[i][j]==0){
                
                marcador = 1;
                
            }
            else{
                soma = matriz[i][j] + soma;
            }

        }
        if (marcador == 1){
            // printf("Linha %i nao da para passar\n ", i);
            soma = 0;
            somas[i] = soma;
        }
        else{
            // printf("A soma da linha %i eh %i\n", i , soma);
            somas[i] = soma;
        }


    }
    for (i=0; i<4 ; i++){
    printf("Soma da linha %i igual a %i\n", i , somas[i]);
}
    


    // colunas
    for (j=0; j<4; j++){   
        marcador = 0;
        soma = 0;
        for (i=0; i<4; i++){
            if (matriz[i][j]==0){
                
                marcador = 1;
                
            }
            else{
                soma = matriz[i][j] + soma;
            }
            

        }
        if (marcador == 1){
            // printf("Coluna %i nao da para passar \n", j);
            soma = 0;
            somas[i] = soma;
        }
        else{
            // printf("A soma da coluna %i eh %i \n", j , soma);
            somas[j] = soma;
        }
    }

    for (i=0; i<4 ; i++){
        printf("Soma da coluna %i igual a %i\n", i , somas[i]);
    }





    return 0;
}