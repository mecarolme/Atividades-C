#include <stdio.h>

//celsius para kelvin
int main () {
	float c, conv;
	printf("Defina uma temperatura em Celsius:\n");
	scanf("%f", &c);
	conv = c + 273.15;

	printf("Os Celsius inseridos convertidos em Kelvin equivalem a:\n%.2f", conv);
	return 0;
}
