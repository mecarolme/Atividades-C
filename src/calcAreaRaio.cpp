#include <stdio.h>
#define PI 3.14

// calculo da area de um circulo
int main() {
	float raio, area;
	printf("Defina o raio para ser calculado a area de um circulo:\n"); 
	scanf("%f", &raio);
	area = PI*raio*raio;

	printf("A area calculada foi: \n%.3f", area);
	return 0;
}
