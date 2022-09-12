#include <stdio.h>

// checa se num é palindromo (pode ser lido de tras pra frente)
int main() {
	int num,res,inverso;

	printf("Digite um inteiro de ate 5 numeros: ");
	scanf("%5d", &num);

	res = num;
	inverso = 0;
	
	while (res != 0) {
	inverso = inverso * 10 + res % 10;
	res = res / 10;
}

	if (inverso == num)
	printf("%d e um palindromo.\n", num);
	else
	printf("%d nao e um palindromo.\n", num);

  return 0;
}
