#include <stdio.h>

//calcular IMC
int main() {
	float KG, M, IMC;
	printf ("Insira seu peso:\n");
    scanf ("%f", &KG);
	printf ("Insira sua altura:\n");
	scanf("%f", &M);
	IMC = KG / (M*M);

	printf("Seu IMC calculado:\n%.2f", IMC);	
	return 0;
}
