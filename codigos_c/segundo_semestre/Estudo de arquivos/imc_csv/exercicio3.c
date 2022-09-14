#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // inicializa o arquivo
	FILE *farq;
    FILE *farq2;
    farq = fopen("dados.csv", "r");
    char *pt;
    char *nome;
    
    float peso, imc; 
    float altura;
	farq2 = fopen("dados.txt", "w+");
    if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    } 

    char content[50];

    while(fgets(content, 50, farq) !=NULL){  // primeiro while pega cada linha do arquivo csv
        pt = strtok(content, ","); // aqui usa o comando strtok para separar em strings a linha do arquivo que ta na variavel content, o parametro usado para separar � a virgula
        nome = pt;

        pt = strtok(NULL, ","); // o valor retornado � sempre uma string, pelo comando fgets 
        peso = atof(pt); // aqui usa a fun��o atof para transformar de string(array de caracteres) para float
        pt = strtok(NULL, ",");
        altura = atof(pt);

        imc = peso/(altura*altura);
        printf("IMC DE %s: %.2f\n", nome, imc);
        
        fprintf(farq2, "IMC DE %s: %.2f\n", nome, imc);
        
    }
	fclose(farq2);

    return 0;
}
