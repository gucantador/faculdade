#include <stdio.h>  
/* 5) Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que faz 12 Km
por litro. Para realizar o c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia. Desta forma, ser�
poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, basta
calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS = DISTANCIA / 12. O
programa deve apresentar os valores da velocidade m�dia, tempo gasto, a dist�ncia percorrida e a quantidade de litros
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
