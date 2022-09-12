#include <stdio.h>

int contpala(char frase [])
{
    int cont=0;
    int contpala=1;
    char control = frase[0];
    
    while (control != '\0')
    { 
        if (control ==' ')
        {
            contpala++;
        }
        cont++;
        control=frase[cont];
    }
    
    return contpala;
}

int main()
{   
    char frase [100];
    
    printf("Insira uma frase: ");
    gets(frase);
    
    printf("\nA sua frase tem %d palavras. \n", contpala(frase) );
    
    return 0;
}
