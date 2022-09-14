/*Exercício 1.
 Escreva um programa que leia o conteúdo um arquivo de texto e:



a. imprima apenas as palavras começadas pelas letras 'a' ou 'A'.

b. calcula a frequência de vogais

c. calcula o percentual de vogais no arquivo. */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *farq;
    char content[100];
    int num_vogais=0, num_caracteres=0, i=0;
    farq = fopen("contatos.txt", "r"); // colocar w se quiser escrever 
	float percentual=0, x=0, y=0;


    if (farq == NULL)   // <---- Testa se o arquivo foi aberto corretamente.
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    } 

// escreve os nomes que começam com a letra a 
    while(fgets(content, 100, farq) != NULL){  
        if (content[0] == 'a'){
            printf("Nome que comeca com a letra a: %s", content);
        }
        
        if (content[0] == 'A'){
        	printf("Nome que comeca com a letra a: %s", content);
    }
        num_caracteres = num_caracteres + strlen(content); // armazena a quantidade de caracteres (incluindo espaçoes em branco)
        for (i=0; i<strlen(content); i++){
            if (content[i] == 'a'){
                num_vogais = num_vogais +1;
            }
            
            if (content[i] == 'e'){
                num_vogais = num_vogais +1;
            }         
            if (content[i] == 'i'){
                num_vogais = num_vogais +1;
            }
            if (content[i] == 'o'){
                num_vogais = num_vogais +1;
            }
            if (content[i] == 'u'){
                num_vogais = num_vogais +1;
            }									   
        }
        
    }

    fclose(farq);

    printf("Quantidade de caracteres: %i\n", num_caracteres);
    x = num_caracteres;
    printf("Quantidade de vogais: %i\n", num_vogais);
    y = num_vogais;
    percentual = (y/x)*100;
    
    printf("Percentual de vogais: %.2f\n", percentual);

    
    return 0;
}
