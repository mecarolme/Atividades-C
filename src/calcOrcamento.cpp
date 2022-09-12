#include <stdio.h>

int main() {
	float valormq,cal,imovel,real;
	int metra,esit,espca,estec,realfim,nit,npca,ntec;
	
	printf("Defina o valor do metro quadrado.(Em R$):\n");
	scanf("%f", &valormq);
	
	printf("Defina a metragem prevista da casa:\n");
	scanf("%d", &metra);
	
	imovel = valormq * metra;
	
	printf("\nAgora, sobre os parametros da obra, defina:\n");
	printf("O IT:\n");
	printf("1-declive(+30%)\n2-plano(+0)\n3-aclive(+15%)\n");
	scanf("%d", &esit);
	
	if(esit==1) 
	{
		nit = imovel * 0.3;
	}
	else{
		if(esit==2){
		//nit = imovel = 0;
	}
	else(esit==3);
	{
		nit = imovel * 0.15;
	}}

	printf("\nO PCA:\n");
	printf("1-Minha casa minha vida(-28%)\n2-Padrao professor(-10%)\n3-Padrao Engenheiro Civil(+25%)\n");
	scanf("%d", &espca);
	
	if(espca==1)
	{
		npca = imovel * 0.28;
	}
	else{
		if(espca==2){
		npca = imovel * 0.10;
	}
	else(espca==3);
	{
		npca = imovel *  0.25;
	}}
	
	printf("\nO TEC:\n");
	printf("1-Obra normal(+0%)\n2-Equipe grande(+40%)\n3-Equipe reduzida(-5%)\n");
	scanf("%d", &estec);
	
	if(estec==1)
	{
		//ntec = imovel = 0;
	}
	else{
		if(estec==2){
		ntec = imovel * 0.4;
	}
		else(estec==3);
	{	ntec = imovel * 0.05;
		}}
	
	real = imovel + nit + npca + ntec;
	realfim = real;
	
	printf("\n\nO valor do orcamento da construcao ficou: R$ %d\n ",realfim);
	
	return 0;
}

