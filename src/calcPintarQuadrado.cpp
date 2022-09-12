#include <stdio.h>

int main() {
	int lado,conta;
	
	printf("Insira um numero de 1 a 20:\n");
	scanf("%d",&lado);
	
	if(lado>20)
	printf("Ultrapassou o limite do programa. Tente novamente!");
	else {
	for(conta=1 ; conta<=lado*lado ; conta++) {
		if(conta% lado==0)
		printf("*\n");
		else
		printf("*");
	}
}
	
	return 0;
}
