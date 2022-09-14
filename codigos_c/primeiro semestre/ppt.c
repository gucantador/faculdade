#include <stdio.h>

int main(){
	
	int jogador1, jogador2;
	
	printf("PEDRA, PAPEL E TESOURA\n");
	printf("1) PEDRA\n");
	printf("2) PAPEL\n");
	printf("3) Tesoura\n");
	printf("Digite a jogada do jogador 1: ");
	scanf("%i", &jogador1);
	
	printf("Digite a jogada do jogador 2: ");
	scanf("%i", &jogador2);
	
	while (jogador1>3, jogador2>3){
		

		
		
		printf("PEDRA, PAPEL E TESOURA\n");
		printf("1) PEDRA\n");
		printf("2) PAPEL\n");
		printf("3) Tesoura\n");
	
		printf("Digite a jogada do jogador 1: ");
		scanf("%i", &jogador1);
		
		printf("Digite a jogada do jogador 2: ");
		scanf("%i", &jogador2);
	
	}

	if (jogador1==jogador2)	{
		printf("EMPATE!");
	}
	
	
	else if (jogador1==1, jogador2==2){
		
		printf("jogador 2 ganhou!");
	}

		
	else if (jogador1==2, jogador2==3){
		printf("jogador 2 ganhou!");
	}
	
	else if (jogador1==3, jogador2==1){
		printf("jogador 1 ganhou!");
	}
	
	else if (jogador1==3, jogador2==1){
		printf("jogador 1 ganhou!");
	}


	
	
	return 1;
	
}


 
