#include <stdio.h>

//calculo de limite de conta
int main() {
	int conta;
	float saldoi,encargos,totalC,limiteC,saldon;
	
	printf("Insira o numero da conta ou -1 para sair.\n");
	scanf("%d",&conta);
	
	if(conta<=0)
	printf("Valor invalido! Tente novamente. \n");
	
	else{
	while(conta>0){
		
	printf("Informe o saldo inicial: ");
	scanf ("%f",&saldoi);
	
	printf("Informe o total de encargos: ");
	scanf ("%f",&encargos);
	
	printf("Informe o total de creditos: ");
	scanf ("%f",&totalC);

	printf("Informe o limite de creditos: ");
	scanf ("%f",&limiteC);
	
	saldon=saldoi+encargos-totalC;
		
	if(saldon > limiteC){
	printf("\nConta:%d",conta);
	printf("\nLimite da conta: R$ %.2f",limiteC);
	printf("\nSaldo: R$ %.2f",saldon);
	printf("\nLimite de credito ultrapassado!!!\n\n");

	printf("Insira o numero da conta ou -1 para sair.\n");
	scanf("%d",&conta);
}
	else{
	printf("\nLimite aprovado!!!\n\n");
	
	printf("Insira o numero da conta ou -1 para sair.\n");
	scanf("%d",&conta);
	}
		}
			}
			
	return 0;
}
