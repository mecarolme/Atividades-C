#include <stdio.h>

//calcular desconto com base no tipo de pagamento
int main() {
	int forma;
    float valor,vdesco;
    
    printf("Insira o valor do produto: ");
	scanf("%f", &valor);
	
	printf("\n");
	
	printf("Insira o numero correspondente a forma de pagamento:\n");
	printf("1 - A Vista\n2 - A Prazo\n");
	scanf("%d", &forma);
	
	printf("\n");
	
	if (forma==1){
		vdesco= valor-(valor*0.1);
		printf("O valor a vista com desconto fica por: R$ %.2f", vdesco);
	} else {
		if(forma==2) {
		printf("O valor a prazo fica por: R$ %.2f", valor);
	} else {
		if(forma>2) {
			printf("Opcao Invalida!!!");
		}
	}
}

    return 0;
}
