#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<windows.h>
#include<conio.h>

//Cabecarios
#include "login.h"



void config();
void createConfig();

int main(){
	//Linguagem PTBR
	setlocale(LC_ALL, "Portuguese");
	//Inicio
	config();W
	printf("Funcinou");

	return 0;
}


void config(){
	int use;
	//Localiza o
	FILE *tconfig;
	tconfig = fopen("config.txt", "r");
	fclose(tconfig);


	// Verifica se existe o config.txt na pasta do programa
	//Caso o programa nao esteja configurado, ele ira criar um arquivo .txt que sera utilizado como banco de dados
	if(tconfig == NULL) {
		printf("Configuração inicial não encontrada, Para configurar o programa\n");
		printf("Digite 1 para Sim, e 2 para n�o \n");
		scanf("%d", &use);
		system("cls");
		if(use == 1) {
			//executa o void para criar o .txt
			createConfig();
		} else if( use == 2) {
			exit(0);
		}
	}


}

//Cria o config.txt (USado como bando de dados para o sistema de LOGIN)
void createConfig(){
	FILE *createC;
	//Configura o arquivo tipo "W" para escrever
	createC = fopen("config.txt", "w");
	fclose(createC);
	cadastroADM();

}
