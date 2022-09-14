#include <stdio.h>

int main(void){

    FILE *fp;

    fp = fopen("teste.txt", "w");
    fprintf(fp, "teste");
    fclose(fp);
    return 0;
}
