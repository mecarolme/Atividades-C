#include <stdio.h>

//calculo de juros em um emprestimo
int main() {
	int dias;
	float valor,taxa,juros;
	
	printf("Entre com o valor do emprestimo (-1 para finalizar):");
	scanf("%f",&valor);
	
	if(valor<=0) {
	printf("Valor invalido, tente novamente. \n");
	} else {
	while(valor>0) {
	printf("Entre com a taxa de juros:");
	scanf("%f",&taxa);
	
	printf("Entre com o periodo de emprestimo em dias:");
	scanf("%d",&dias);
	
	juros = valor*taxa*dias/365;
	
	printf("O valor dos juros:$%.2f\n\n",juros);
	
	printf("Entre com o valor do emprestimo (-1 para finalizar):");
	scanf("%f",&valor);
	}
}
	return 0;
}

