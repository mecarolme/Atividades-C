#include <stdio.h>

//saber se um num seria multiplo 
int main() {
    int m, n, mcal;
    printf("Esse numero... ");
    scanf("%d", &m);
    printf("E multiplo desse? ");
    scanf("%d", &n);

	mcal = m%n;
	printf("\nSegundo os calculos...\n");

    if ("%d",mcal==0) {
       printf("Sim, e multiplo\n");
	} else {
		printf("Nao e multiplo\n");
	}

    return 0;
}
