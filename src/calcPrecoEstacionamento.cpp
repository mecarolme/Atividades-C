#include <stdio.h>
#include <math.h>

float caltaxa ( float h) {
	float taxa;
	if (h < 3.0) {
		taxa = 2.0;
	} else
	taxa = 2.0 + 0.50 * ceil ( h - 3.0);
	
	if (taxa > 24) {
		taxa = 10.0;
		return taxa;
	} else {
		return taxa;
	}
}

int main() {
	float h;
	float txatual, txtotal, hrTotal;
	int i;
	int first = 1;
	
	printf("\nInsira as horas de estacionamento para 3 clientes diferentes: ");
	
	for ( i = 1; i <= 3; i++) {
		scanf("%f", &h);
		hrTotal = h + hrTotal;
		
		if ( first ) {
			printf("%5s%15s%15s\n", "Carro", "Hora", "Taxa");
			first = 0;
		}
		
		txatual = caltaxa(h);
		txtotal = txtotal + txatual;
		
		printf("%5d%15.1f%15.2f\n", i, h , txatual);
	}
	
	printf("%5s%15.1f%15.2f\n", "Total", hrTotal, txtotal);
	
	return 0;
}


