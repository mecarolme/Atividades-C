#include <stdio.h>

//calculo de km percorridos por litro de gasolina
int main() {
	float km,litro,uso;
	int contador=0;
	
	printf("Insira a quantidade de litros abastecida ou digite -1 para parar:\n");
	scanf("%f",&litro);
	
	if(litro<=0)
	printf("Nenhum valor foi fornecido \n");
	
	else{
	while (litro>0){
	printf("Insira os quilometros percorridos:\n");
	scanf("%f",&km);
	
	uso = km / litro;

	printf("A quantidade de quilometros rodados por litro dessa vez foi:\n%.2f km/L \n",uso);

	uso += km / litro;
	++contador;

	printf("\nInsira a quantidade de litros abastecida ou digite -1 para parar:\n");
	scanf("%f", &litro);
}

	printf("\n\nO calculo total de km por litro foi:\n%.2f", uso/contador);
}
	return 0;
}
