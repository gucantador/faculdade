#include <stdio.h>

// 2. Crie uma função (rotina que devolve um valor) para:

// a. Determinar os números impares de 1 a 100000

// b. Ler um número e verificar se ele é primo. 

//      Repetir a operação até que seja digitado a opção com valor 0 para sair; caso contrário solicita um novo valor.

// c. Ler e armazenar em um vetor uma sequência de números positivos e calcular a média, soma, maior e menor número. 

//     Deve ser lidos e preenchidos no vetor 100 números válidos

 
void numbers (){
    int i;
    for(i=0; i<=100; i++)
    {
        if (i%2!=0)
        {
            printf("%i \n", i);
        }

    }
}



void primo (){


    
    int numb=10;
    while (numb!=0){
      int cont =2, x=0;
      printf("Digite um numero para saber se é primo: ");
      scanf("%i", &numb);
      if (numb==0){
        break;
      }
      while (numb%cont==0 && numb!=cont)
      {
          if (numb%cont==0)
          {
            printf("Número nao primo \n");
            x=1;
            break;
            
          }    
          
          else{
            cont = cont+1;
          }
          
      }
      if (x!=1){
        printf("numero primo \n");
      }
    }
}   

void vetor(){
  int nums[5];
  int i, soma, tam;
  float media;

  for(i=0; i<5; i++ )
  {
    printf("Caso queira prosseguir digite 0, se nao entre com um numero positivo: ");
    scanf("%d", &nums[i]);
    soma = soma + nums[i];

    if (nums[i]<0)
    {
      printf("ERRO! Digite apenas numeros positivos.\n");
      i = i-1;
    }

    if (nums[i]==0)
    {
      tam = i;
      break;
    }
    
  }

    //calcular a media 
  // for (i=0; i<100; i++)
  // {
  //   printf("%i\n", soma);
  //   soma = soma + nums[i];

  // }
  media = soma/tam;
  printf("media abaixo\n");
  printf("%4.2f", media);
  // printf("%i\n", soma);
  // printf("%i", tam);
  // printar na tela 
  for (i = 0; i < 4; i++ ) {
    printf("%i\n",  nums[i] );
  }

}

int main(){

  vetor();
  return 0;
}

