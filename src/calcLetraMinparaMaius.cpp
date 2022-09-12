#include <stdio.h>

// converter letra min para maius
int main() {
	char letra, ascii;
	printf("Digite sua letrinha:");
	scanf("%c",&letra);
	ascii= letra-32;

	printf("Sua letra, agora maiuscula: %c",ascii);
	return 0;
}
