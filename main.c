#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[40];
	char endereco[50];
	char telefone[13];
    printf("digite o nome:\n");
    fgets(nome,50,stdin);
    printf("digite o endereco:\n");
    fgets(endereco,60,stdin);
    printf("digite o telefone:\n");
    fgets(telefone,14,stdin);
    printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome,endereco,telefone);

	
	

	
	return 0;
}