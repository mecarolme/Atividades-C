#include <stdio.h>

// Fatorial
int fatorial(int num){
	int fatora;
	
	for(fatora = 1; num > 1; num = num - 1)
	fatora = fatora * num;

	return fatora;
}

int main() {
	int num,fato;
	printf("Defina um numero para fatorar: ");
	scanf("%d", &num);
	
	printf("%d! = %d",num, fatorial(num));

	return 0;
}
