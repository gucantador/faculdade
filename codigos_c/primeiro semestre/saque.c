#include <stdio.h>

int main(){
	
	int saque;
	int notas200, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	
	printf("Digite a quantia a ser sacada: ");
	scanf("%d", &saque);
	
	
	notas200 = saque / 200;
	saque = saque % 200;
	notas100 = saque / 100;
	saque = saque % 100;
	notas50 = saque / 50;
	saque = saque % 50;
	notas20 = saque / 20;
	saque = saque % 20;
	notas10 = saque / 100;
	saque = saque % 10;
	notas5 = saque / 5;
	saque = saque % 5;	
	notas2 = saque / 2;
	saque = saque % 2;	
	notas1 = saque / 1;
	saque = saque % 1;
	
	
	
	printf("Notas de 200 = %d\n", notas200);
	printf("Notas de 100 = %d\n", notas100);
	printf("Notas de 50 = %d\n" ,notas50);
	printf("Notas de 20 = %d\n", notas20);
	printf("Notas de 10 = %d\n", notas10); 
	printf("Notas de 5 = %d\n", notas5);
	printf("Notas de 2 = %d\n", notas2);
	printf("Notas de 1 = %d\n", notas1);
	
}
