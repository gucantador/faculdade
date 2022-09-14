#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // inicializa o arquivo
	FILE *farq;
    farq = fopen("dados.csv", "r");
    char *pt;
    char *nome;
    
    float peso, imc; 
    float altura;

    if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    } 

    char content[50];

    while(fgets(content, 50, farq) !=NULL){  // primeiro while pega cada linha do arquivo csv
        pt = strtok(content, ","); // aqui usa o comando strtok para separar em strings a linha do arquivo que ta na variavel content, o parametro usado para separar é a virgula
        nome = pt;

        pt = strtok(NULL, ","); // o valor retornado é sempre uma string, pelo comando fgets 
        peso = atof(pt); // aqui usa a função atof para transformar de string(array de caracteres) para float
        pt = strtok(NULL, ",");
        altura = atof(pt);

        imc = peso/(altura*altura);
        printf("IMC DE %s: %.2f\n", nome, imc);
    }


    return 0;
}
