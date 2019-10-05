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
	config();
	printf("Funcinou");

	return 0;
}


void config(){
	int use;
	//Loc arquivo
	FILE *tconfig;
	tconfig = fopen("config.txt", "r");
	fclose(tconfig);


	// Veric arquivo
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

//Cria o config.txt
void createConfig(){
	FILE *createC;
	createC = fopen("config.txt", "w");
	fclose(createC);
	cadastroADM();

}
