#include <stdio.h>
#define time 5 

	int tabela[time][time] = 
	{0,-2,-1, 3, 0,
	 2, 0,-2,-4,-3,
	 1, 2, 0,-5, 0,
	-3, 4, 5, 0, 0,
	 0, 3, 0, 0, 0};

int saldoFinal(int index){
	int saldo=0, linha=0;
	
	for (linha=0; linha<5; linha++){
		saldo = tabela[linha][index] + saldo;
	}
	return saldo;
}

int maisVitorias(){
	int i=0, j=0, vitoria = 0;
	int vitorias[5];
	
	
	for (j=0;j<5;j++){
		vitoria = 0;
		for (i=0; i<5; i++){
			if (tabela[i][j]>0){
				vitoria = vitoria +1;
	
			}
		vitorias[j] = vitoria;
		
		}
	}
	int maiorNumero = 0;
	int marcador = 0;
	i=0;
	int vitorioso = 0;
	int empate = 0;
	
	for (i=0; i<5; i++){

		
		if (maiorNumero<vitorias[i]){
			vitorioso = i;
			maiorNumero = vitorias[i];
			
		}
}
	for (i=0; i<5; i++){
		
		if (maiorNumero == vitorias[i] && i != vitorioso){
			printf("empate entre %i e %i\n", vitorioso, i);
		}
}
//		else if (maiorNumero == vitorias[i]){
////			marcador = i;
//			printf("\nHouve um empate entre os times %d e %d\n", maiorNumero, marcador);
//		}
		
		


	
	return vitorioso;
}
	


int main(){
	
	// 0 americana, 1 campinas, 2 lorena, 3 piracicaba, 4 sao paulo
	int i = 0;
	int saldo = saldoFinal(2);
	printf("saldo do time perguntado %d\n", saldo);
	int vitorias;
	
	vitorias = maisVitorias();
	

	
	printf("O time com mais vitoria eh %i\n", vitorias);
		
	
	return 0;
}
