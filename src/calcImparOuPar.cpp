#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num%2==0) {
       printf("Par");
	} else {
        printf("Impar");
	}

    return 0;
}
