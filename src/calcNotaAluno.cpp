#include <stdio.h>

//calcular aprovação por nota
int main() {
	float nota;
	printf("Insira sua nota:\n");
	scanf("%f", &nota);
	
	if (nota <=10) {
	if (nota >=7) {
		printf("Aluno(a) PASSOU!!! :D");
	} else {
		printf("Aluno(a) Reprovou. :c");
	}} else {
	printf("Nota invalida.\n");
	printf("O sistema aceita apenas notas entre 0 e 10.");
	}

	return 0;
}
