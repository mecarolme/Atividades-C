#include <stdio.h>
#include <math.h>

// Poupanca com depositos mensais
float Pou(int Meses,float Depo,float DepoM,float JuM){
	float cal, calM, Fim;
	
	calM = Meses * DepoM;
    cal = (Depo) * pow((1 + (JuM)), Meses);
    Fim = cal + calM;
    
    return Fim;
}

int main() { 
    float Depo,DepoM,JuM;
    int Meses;
    
    printf("Programinha para saber quanto a poupanca rendera ate seus 65 anos.\n");
	printf("\nDigite o valor do deposito inicial: ");
	scanf("%f", &Depo);
	
	printf("\nDefina quanto ira depositar por mes: ");
	scanf("%f", &DepoM);
	
	printf("\nDefina a taxa dos Juros ao mes: ");
	scanf("%f", &JuM);
	
	printf("\nInsira a quantidade de meses que faltam para seus 65 anos: ");
	scanf("%d", &Meses);
	
	printf("\nAo final, tera em sua conta: R$ %.2f\n", Pou(Meses,Depo,DepoM,JuM));
	
	return 0;
}
