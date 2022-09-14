# include <stdio.h>

int main(){
    
    int posi1, posi2, posi3;
    int matriz[3][3] = { {1, 0, 0}, {1, 0, 0}, {1, 0, 0}};
    

    if (posi1[0][0] == posi2[0][1] == posi3[0][2] || posi1[1][0] == posi2[1][1] == posi3[1][2] || 
    posi1[2][0] == posi2[3][1] == posi3[3][2] || posi1[1][0] == posi2[2][0] == posi3[3][0] ||
    posi1[1][1] == posi2[2][1] == posi3[3][1] || posi1[1][3] == posi2[2][3] == posi3[2][2] ||
    posi1[0][0] == posi2[1][1] == posi3[2][2] || posi1[1][2] == posi2[2][2] == posi3[2][0]){
        printf("Alguem ganhou");
    }

    else{
        printf("Deu velha");
    }

}