#include <stdio.h>

int main() {
	char gen;
	
	printf("Defina entre (M/F): ");
	scanf("%c",&gen);
	
	switch (gen) {
		case 'M':
		printf("Masculino");
		break;
		
		case 'F':
		printf("Feminino");
		break;
		
		default:
		printf("Opcao Invalida!!!");
	}

    return 0;
}
