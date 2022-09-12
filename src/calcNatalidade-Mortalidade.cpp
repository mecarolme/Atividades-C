#include <stdio.h>

//calcula taxa de natalidade e mortalidade
int main() {
    char menu;
    float tnatal,tmortal,numhab;
    float numnasci, numobi;
  
    printf("Defina 1 ou 2 para calcular...\n");
    printf("1 - A taxa de natalidade \n");
    printf("2 - A taxa de mortalidade \n");
	scanf("%c", &menu);
	printf("\n");
    
    switch(menu) {
    	case '1':
    	
    	printf("Insira o numero de habitantes: ");
    	scanf("%f", &numhab);
    	printf("\n");
    	printf("Insira o numero de nascimentos: ");
    	scanf("%f", &numnasci);
    	printf("\n");
    	tnatal= (numnasci*1000)/numhab;
    	
    	printf("A taxa de natalidade calculada: %.1f%%",tnatal);
    	break;
    	
    	case '2':
    	
    	printf("Insira o numero de habitantes: ");
    	scanf("%f", &numhab);
    	printf("\n");
    	printf("Insira o numero de mortes: ");
    	scanf("%f", &numobi);
    	printf("\n");
    	tmortal= (numobi*1000)/numhab;
    	
    	printf("A taxa de mortalidade calculada: %.1f%%",tmortal);
    	break;
    	
    	default:
    	printf ("Valor invalido!!!\n");
	}
   
    return 0;
}
