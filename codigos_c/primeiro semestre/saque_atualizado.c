# include <stdio.h>

int main () {
	
	int saque, notas200, notas100, notas50, notas20, notas10, notas5, notas2, opcao, deposito;

	
	
	
	printf("CAIXA ELETRONICO GCbank\n");
	printf("Escolha a acao que deseja realizar: \n");	
	printf("1 - Consultar extrato\n");
	printf("2 - Saque\n");
	printf("3 - Deposito\n");
	printf("4 - Sair\n");
	scanf("%i", &opcao);
	
	while (opcao <0 , opcao > 5){
	printf("CAIXA ELETRONICO GCbank\n");
	printf("Escolha a acao que deseja realizar: \n");	
	printf("1 - Consultar extrato\n");
	printf("2 - Saque\n");
	printf("3 - Deposito\n");
	printf("4 - Sair\n");
	scanf("%i", &opcao);
	}
	
	while (opcao > 0){
	
		
		// REALIZANDO FUNCIONAMENTO DO EXTRATO
		
		if (opcao == 1)
		{
			printf("Ola Cliente, segue seu extrato: RICO\n\n");
			printf("Escolha a acao que deseja realizar: \n");	
			printf("1 - Consultar extrato\n");
			printf("2 - Saque\n");
			printf("3 - Deposito\n");
			printf("4 - Sair\n");
			scanf("%i", &opcao);
			
		}
		
		
		// REALIZANDO FUNCIONAMENTO DO CAIXA ELETRONICO
	
		
		if (opcao == 2)
		{
			printf("Digite o valor do saque: ");
			scanf("%i", &saque);
			
			notas200 = saque/200;
			saque = saque%200;
			
			notas100 = saque/100;
			saque = saque%100;
		
			notas50 = saque/50;
			saque = saque%50;
			
			notas20 = saque/20;
			saque = saque%20;
			
			notas10 = saque/10;
			saque = saque%10;	
		
			notas5 = saque/5;
			saque = saque%5;
			
			notas2 = saque/2;
			saque = saque%2;
			
			if (notas200 > 0){
				printf("Notas de 200: %i\n", notas200);
			}
			
			
			if (notas100 > 0){
				printf("Notas de 100: %i\n", notas100);
			}
			
			if (notas50 > 0){
			printf("Notas de 50: %i\n", notas50);
			}	
			
			if (notas20 > 0){
			printf("Notas de 20: %i\n", notas20);
			}
			
			if (notas10 > 0){
			printf("Notas de 10: %i\n", notas10);
			}
			
			if (notas5 > 0){
			printf("Notas de 5: %i\n", notas5);
			}
			
			if (notas2 > 0){
			printf("Notas de 2: %i\n", notas2);
			}
			printf("Por favor, retire o dinheiro. \n\n");
			
			printf("Escolha a acao que deseja realizar: \n");	
			printf("1 - Consultar extrato\n");
			printf("2 - Saque\n");
			printf("3 - Deposito\n");
			printf("4 - Sair\n");
			scanf("%i", &opcao);
			
			}
			
		if (opcao == 3){
			printf("Digite o valor a depositar: ");
			scanf("%i", &deposito);
			printf("Insira o evelope\n\n");
			printf("Reconhecendo...\n\n");
			printf("Concluido\n\n");
			
			printf("Escolha a acao que deseja realizar: \n");	
			printf("1 - Consultar extrato\n");
			printf("2 - Saque\n");
			printf("3 - Deposito\n");
			printf("4 - Sair\n");
			scanf("%i", &opcao);
		}
		
		if (opcao ==4){
			printf("Obrigado e ate logo!");
			break;
		
		}
		
	}

	opcao = opcao - 9;
	
	return 0;
}






