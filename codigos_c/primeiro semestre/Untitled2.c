#include <stdio.h>  
/* 5) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km
por litro. Para realizar o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média. Desta forma, será
possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta
calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. O
programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros
utilizada na viagem. Dica: trabalhe com valores reais. */


int main () {
	
	float t, vm, d, l;
	
	printf("BEM VINDO, VAMOS CALCULAR O GASTO DE COMBUSTIVEL NA SUA VIAGEM");
	
	
	printf("Qual o tempo da sua viagem em horas: ");
	scanf("%f", &t);
	
	printf("Qual a velocidade media da sua viagem em km/h");
	scanf("%f", &vm);
	
	d=t*vm;
	l=d/12;
	
	printf("Quantidade em litros de gasolina gasto na sua viagem: %f", l);
	
}
