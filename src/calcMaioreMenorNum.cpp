#include <stdio.h>

//maior e menor numero entre 5
int main() {
	int num,maior=0,menor=0;
    printf("digite um numero:");
    scanf("%d",&num);
    maior= num;
    menor= num;

    //o ultimo num inserido não é considerado
	int nump=0;
	while (nump<5) {
	nump++;
	
	if(num>0){
    if(num>maior)maior=num;
    if(num<menor)menor=num;
    }
    else(num<0);{
    printf("calculando...\n");
    printf("digite mais um numero:");
    scanf("%d",&num);  
    }
}
		
	printf("O maior inteiro digitado foi:%d\n",maior);
    printf("O menor inteiro digitado foi:%d\n",menor);
	return 0;
}
