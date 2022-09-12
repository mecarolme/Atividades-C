#include <stdio.h>

//real para dolar
int main() {
	float dolar, conv;
	printf("insira o valor em dolares: ");
	scanf ("%f", &dolar);
	//valor do dolar no dia 14 de fev foi de 5.37
	conv=dolar*5.37;

	printf("Em reais, equivale a: R$%.2f", conv);
	return 0;
}
