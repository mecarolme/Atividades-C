#include <stdio.h>

// Raiz Quadrada
int raiz (int numero) {
    int n;
    int conta = numero;
   
    for (n = 0; n < 10; ++n)
    conta = conta/2 + numero/(2*conta);
           
    return conta;    
}

int main() {  
    int numero;
   
    printf("Insira um numero para saber sua raiz: ");
    scanf("%d",&numero);
   
    printf("\nA raiz quadrada de %d: %d \n",numero,raiz(numero));

    return 0;
}
