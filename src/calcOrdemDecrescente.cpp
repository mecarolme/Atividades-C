#include <stdio.h>

int maior (int num [], int size);

void ordem (int num [], int size) {
  int indicebig = 0;
  int i, c, calmaior, calvar;

  for (i=0; i < size;i++) {
       calmaior = maior (&num[i], size - i);
       for (c=i; c<(size); c++) {
         if (calmaior == num[c]) {
                 indicebig = c;
                 break;
             }
       }

        calvar = num[i];
        num [i]=calmaior;
        num [indicebig] = calvar;
   }
}

int maior (int num [], int size) {
    int bignum = num[0];
    int a;
    for (a = 1; a < size; a++ ) {
        if ( bignum < num [a])
          bignum = num[a];
    }

    return bignum;
}

int main() {   
	int i,a;
    int num [5];
    
    printf("Insira uma sequencia de 5 numeros\n");
    
    for (a=0;a<5;a++) {
    printf("Num %d : ", a+1);
    scanf("%d", &num[a]);
	}

    for (i=0; i < 5;i++) {
        printf ("%d ", num [i]);
    }
    
    ordem (num, 5 );
    printf("\n\n");
    printf ("Em ordem decrescente:\n");
    
    for (i=0; i < 5;i++) {
       printf ("%d ", num [i]);
    }
    
    return 0;
}
