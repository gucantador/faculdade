#include <stdio.h>

int main()
{
  int contador; //vari�vel de controle do loop
  
  for(contador = 1; contador <= 1000; contador++)
  {
    if (contador%2 != 0){
    	printf("%i\n", contador);
	}
  }
  

}
