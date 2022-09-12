#include <stdio.h>

// Potencia

int potencia(int x, int z){
	int contador, calculo;
	
	calculo = 1;
	contador = 0;
  
	while (contador != z) {
    calculo = calculo * x;
    contador = contador + 1;
}
	return calculo;
}

int main() {
  int x,z,p;
  
  printf("Calculo de potencia\n");
  printf("\nDigite um numero base: ");
  scanf("%d", &x);
  printf("\nDigite outro numero como expoente: ");
  scanf("%d", &z);
  p = potencia(x,z);
  
  printf("\nO valor de %d elevado a %d: %d\n", x, z, p);
  
  return 0;
}
