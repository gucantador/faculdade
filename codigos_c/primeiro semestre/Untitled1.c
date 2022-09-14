


#include <stdio.h>
#include <stdlib.h>

int main() {
  int qtd, i, nums[qtd], c, t, x = 0;
  printf("Digite quantos numeros serao apostados:");
  scanf("%i", &qtd);


  for (i=0; i<qtd; i++){
    int num = rand() % 60;
    x = 0;
    for (c = 0; c<i; c++){
      if (num == nums[c]){
        x = 1;
    }
	}
	if (x == 0){
		nums[i] = num;
	}
    
}
    
  for (t = 0; t<qtd ; t++ ){
    printf("%i \n", nums[t]);
  }
  
  
  return 0;

}

  
