#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_contato{
    char nome [200];
    char email [200];
    char telefone[200];
};

void mostrarPesquisa(struct dados_contato contato[], char* buscaDesejada){
    int i;
    for (i = 0; i < 3; i++){
    if(strcmp(contato[i].nome, buscaDesejada) == 0){
        printf("\nTelefone de %s: %s", contato[i].nome, contato[i].telefone);
    break;
    }
 }
}

int main(){

struct dados_contato contatos[3];
int i;
char buscaDesejada[200];

    for(i = 0; i < 3; i++){
        printf("\n\t%d° CONTATO\n", i + 1);
        printf("Nome do contato: ");
        gets(contatos[i].nome);
        
        printf("Informe o email: ");
        gets(contatos[i].email);
        
        printf("Informe o numero do telefone: ");
        gets(contatos[i].telefone);
        
        
    }
    printf("Digite o nome do contato que deseja buscar: ");
    gets(buscaDesejada);
    
    mostrarPesquisa(contatos, buscaDesejada);
    
    return 0;
}
