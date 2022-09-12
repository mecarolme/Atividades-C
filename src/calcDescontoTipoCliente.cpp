#include <stdio.h>

//calcular desconto com base no tipo do comprador
int main() {
    float valorCI, valorCF;
    int comprador;
    
    printf("Insira o valor da compra: ");
    scanf ("%f", &valorCI);
    
    printf("\nDefina o numero que indica a classificacao do comprador.\n");
    printf("Cliente Comum(1)\nFuncionario(2)\nCliente VIP(3)\n");
    scanf ("%d", &comprador);

	if(comprador==1) {
    valorCF= valorCI- (valorCI*0);
    printf("\nO valor final para clientes: R$ %.2f \n", valorCF);
    } else {
	if (comprador==2) {
	valorCF= valorCI- (valorCI*0.1);
	printf ("\nO valor final com desconto para funcionarios: R$ %.2f", valorCF);
	} else {
	if (comprador==3) {
	valorCF= valorCI- (valorCI*0.05);
	printf ("O valor final com desconto para clientes VIP: R$ %.2f", valorCF);
	} else {
	if (comprador>3) {
	printf ("\nOpcao Invalida!");
	}}}}
	
    return 0;
}
