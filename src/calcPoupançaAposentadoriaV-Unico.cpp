#include <stdio.h>
#include <math.h>
// Poupança com deposito unico
// Considerando R$5.000 de deposito = 5000
// Rendendo 0.15% ao mes na poupanca = 0.0015
// Daqui 35 anos = 420 meses = 420

// 5000 x 1.0015 elevado a 420
// Ao final tera na conta -> 9.383,62

float Pou(int Meses,float Depo,float JuM){
	float cal;
	
    cal = (Depo) * pow((1 + (JuM)), Meses);
    return cal;
}

int main()
{  
    float Depo,JuM;
    int Meses;
    
    printf("Programinha para saber quanto a poupanca rendera ate a aposentadoria.\n");
	printf("\nDigite o valor do deposito inicial: ");
	scanf("%f", &Depo);
	
	printf("\nDefina a taxa dos Juros ao mes: ");
	scanf("%f", &JuM);
	
	printf("\nInsira a quantidade de meses ate a sua aposentadoria: ");
	scanf("%d", &Meses);
	
	printf("\nAo final, tera em sua conta: R$ %.2f\n", Pou(Meses,Depo,JuM));
	
	return 0;
}
