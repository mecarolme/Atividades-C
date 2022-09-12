#include <stdio.h>
#include <math.h>

int main(){
	float larg, compt, inclit, largcal, areat, quante;
	int tipot;
	
	printf("Vamos calcular...");
	printf("\nDefina a largura da base:\n");
	scanf("%f",&larg);
	
	printf("\nDefina o comprimento do telhado:\n");
	scanf("%f",&compt);
	
	printf("\nDefina a inclinacao minima indicada pelo fabricante:\n");
	scanf("%f",&inclit);
	
	printf("\nDefina o tipo de telha:\n");
	printf("1-Romana:16/m2\n2-Italiana:14/m2\n3-Colonial pequena:24/m2\n4-Colonial grande:16/m2\n5-Francesa:16/m2\n6-Portuguesa:17/m2\n7-Americana:12,5/m2\n");
	scanf("%d",&tipot);

	if(tipot<=0){
	printf("Valor invalido!!!");
}
	else{
	while (tipot>0 && tipot<=7)
	{
	largcal = larg*larg + larg*inclit/100*larg*inclit/100;
   	areat = compt * largcal;
   	
   	switch (tipot)
   	{
    case 1:
    	quante = areat * 16;
    break;
    case 2:
        quante = areat * 14;
    break;
    case 3:
        quante = areat * 24;
    break;
    case 4:
        quante = areat * 16;
    break;
    case 5:
        quante = areat * 16;
    break;
    case 6:
        quante = areat * 17;
    break;
    case 7:
        quante = areat * 12.5;
    break;
    
	default:
    printf ("tipo de telha invalido.");
}
	printf ("\nSegundo os calculos, sao necessarias %d telhas.", (int)quante);	
	
	return 0;
}
}
}
