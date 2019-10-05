//#include "renomear.h"

void cadastroADM(){
	//Definir variveis
	char userADM[9];
	char passADM[9];

	//Salvar as informacoes
	FILE *config;
	config = fopen("config.txt", "w");
	printf("Cadastro do adminstrator do sistema \n");
	//Salvar admin
	printf("Digite o login desejado: ");
	scanf("%s", &userADM);
	fprintf(config, "%s\n", userADM);
	//Salvar senha
	printf("Digite a senha desejada: ");
	scanf("%s", &passADM);
	fprintf(config, "%s", passADM);
	fclose(config);
}
