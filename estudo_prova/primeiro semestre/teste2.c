#include <stdio.h>
#include <stdlib.h>
int main () {
   int qtdade;
   float media, soma, maior=0, menor=0;


   printf("Digite quantos numeros positivos serao digitados: ");
   scanf("%i", &qtdade);
   float notas[ qtdade ];
   int i;
   /* Lendo as notas do aluno */
   for ( i = 0; i < qtdade; i++ ) {
      printf("Entre com o %d numero: \n", i+1);
      scanf("%f", &notas[i]);
   }
   /* Mostrando na tela as notas armazenadas */
   for (i = 0; i < qtdade; i++ ) {
      printf("Numero %d = %4.2f\n", i+1, notas[i] );
   }
   
   soma = notas[0]; 


   for (i = 1; i < qtdade; i++ ){
      soma = soma + notas[i];
   }
   printf("A soma dos numeros digitados eh: %4.2f\n", soma);

   media = soma/qtdade;

   printf("A media dos numeros digitados eh: %4.2f\n", media);

   
   for (i = 0; i < qtdade; i++) {
      if (i == 0) {
         maior = notas[i];
      }
      if (notas[i] > maior) {
         maior = notas[i];
      }
      
	}
   printf("O maior numero eh: %4.2f", maior);

   for (i = 0; i < qtdade; i++) {
      if (i == 0) {
         menor = notas[i];
      }
      if (notas[i] < menor) {
         menor = notas[i];
      }
	}
   printf("O maior numero eh: %4.2f", menor);

	
   


   return 0;

}
