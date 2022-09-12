#include <stdio.h>

int contchar (char palavra []) {
    int cont=0;
    char control=palavra [0];
    
    while (control != '\0')
    {
        cont++;
        control=palavra[cont];
    }
    return cont;
}

int main() {   
    char palavra [100];
    
    printf("Insira uma palavra: ");
    gets(palavra);
    
    printf("\nA palavra tem %d caracteres. \n",contchar(palavra) );
    
    return 0;
}
