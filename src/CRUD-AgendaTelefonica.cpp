#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCONTS 1000

typedef enum {
	Tela_S = -1,
	Tela_P, //0
	Tela_C, //1
	Tela_DC, //2
	Tela_LT, //3
} Telas;

typedef struct {
	char nome[128];
	char telefone[64];
} Contato;

typedef struct {
	Telas menu;
	int totalconts;
	Contato conts[MAXCONTS];
} AgendaTel;

int main () {
	AgendaTel agenda;
	memset (&agenda, 0x0, sizeof(agenda));
	
	agenda.menu = Tela_P;
	
	FILE * memoria = fopen ("contatos.bin", "rb");
	if (memoria == NULL)
	{
		printf("Erro ao abrir arquivo de memoria de contatos.\n");
		printf("Voce deve criar o arquivo 'contatos.bin' na primeira execucao.\n");
		return 1;
	}
	
	size_t lidos = fread(agenda.conts, sizeof(Contato),
				MAXCONTS, memoria);
	printf("Lidos %zd contatos\n", lidos);
	agenda.totalconts = (int)lidos;
	fclose(memoria);
	
	while (agenda.menu != Tela_S)
	{
		switch (agenda.menu)
		{
			case Tela_P: 
			{
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("\tAgenda Telefonica");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
				
				int opcao;
				do
				{
					printf("\n\nEscolha uma opcao:\n");
					printf("1 - Cadastrar contato\n");
					printf("2 - Remover contato\n");
					printf("3 - Listar todos\n");
					printf("0 - Sair\n\n");
					scanf("%d", &opcao);
				} while (opcao < 0 && opcao > 3);
			
			if (opcao == 0)
				agenda.menu = Tela_S;
				
			if (opcao == 1)
			{
				agenda.menu = Tela_C;
				if (agenda.totalconts >= MAXCONTS)
				{
					printf("\tAgenda esta cheia, nao foi possivel adicionar mais.\n");
					agenda.menu = Tela_P;
				}
			}
			
			if (opcao == 2)
			{
				agenda.menu = Tela_DC;
				if (agenda.totalconts == 0)
				{
					printf("\tNao ha contatos para remover.\n");
					agenda.menu = Tela_P;
				}
			}
			
			if (opcao == 3)
			{
				agenda.menu = Tela_LT;
				if (agenda.totalconts == 0)
				{
					printf("\tNao ha contatos para listar.\n");
					agenda.menu = Tela_P;
				}
			}
			break;
			
			case Tela_C:
				{
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("\tTela de Cadastro");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				Contato novo;
				char opcao = 's';		

				int c = 0;
				while ((c = getchar()) != '\n' && c != EOF) {  }
				do
				{
					memset(&novo, 0x0, sizeof(novo));
					printf("\nDigite um novo nome para o contato: \n");
					fgets(novo.nome, 128, stdin);
					int id = 0;
					while (novo.nome[id] != '\0' && novo.nome[id] != '\n') 
						id++;
					novo.nome[id] = '\0';
					
					printf("Digite um novo telefone para o contato: \n");
					fgets(novo.telefone, 64, stdin);
					id = 0;
					while (novo.telefone [id] != '\0' && novo.telefone[id] != '\n') 
						id++;
					novo.telefone[id] = '\0';
					
					printf("\nTem certeza que quer adicionar esse contato? [s/n]\n");
					opcao = getchar();
					int c = 0;
					while ((c = getchar()) != '\n' && c != EOF) {  }
					
				} while (opcao == 'n' || opcao == 'N');
				
				agenda.conts[agenda.totalconts] = novo;
				agenda.totalconts++;
				
				memoria = fopen ("contatos.bin", "w+b");
				if (memoria == NULL)
				{
					printf("Erro ao abrir contatos.bin\n");
					return 0;
				}
				
				size_t salvos = fwrite(agenda.conts, sizeof(Contato),
				agenda.totalconts, memoria);
				if (salvos != (size_t)agenda.totalconts)
				{
					printf("Erro ao salvar os contato na memoria contatos.bin\n");
					return 1;
				}
				fclose(memoria);
				
				agenda.menu = Tela_P;
				}
			break;
			
			case Tela_DC:
				{
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("\tRemovendo Contatos");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				int i;
				
				for (i = 0; i < agenda.totalconts; i++)
				{
					printf("\nContato %d", i);
					printf("\nNome: %s", agenda.conts[i].nome);
					printf("\nTelefone: %s\n", agenda.conts[i].telefone);
					printf("----------------------------------------\n");
				}
				int indice = -1;
				do
				{
					printf("\n\nDigite um indice de contato para excluir: de 0 ate %d \n", agenda.totalconts-1);
					scanf("%d", &indice);
					
					int c = 0;
					while ((c = getchar()) != '\n' && c != EOF) {  }
					
				} while (indice < 0 || indice >= agenda.totalconts);
					
					for (i = indice; i < agenda.totalconts - 1; i++)
					agenda.conts[i] = agenda.conts[i+1];
					agenda.totalconts--;
					
					memoria = fopen("contatos.bin", "w+b");
					if (memoria == NULL)
					{
						printf("Erro ao abrir contatos.bin\n");
						return 0;
					}
					size_t salvos = fwrite(agenda.conts, sizeof(Contato), 
						agenda.totalconts, memoria);
					if (salvos != (size_t)agenda.totalconts)
					{
						printf("Erro ao salvar contatos na memoria contatos.bin\n");
						return 1;
					}
					fclose(memoria);
					
					agenda.menu = Tela_P;
				}
			break;
			
			case Tela_LT:
				{
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("\tListando Contatos");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
					
				int i;
				for ( i = 0; i < agenda.totalconts; i++)
				{
					printf("\nContato %d\n", i);
					printf("Nome: %s\n", agenda.conts[i].nome);
					printf("Telefone: %s\n", agenda.conts[i].telefone);
					printf("----------------------------------------\n");
				}
					agenda.menu = Tela_P;
				}
			break;
			
		default:
			agenda.menu = Tela_P;
		break;
		}
	}
}
return 0;
}
