//#include "renomear.h"



void cadastroADM(){
	//Definir variveis
	char userADM[9];
	char passADM[9];
	char pCONFIRM[9];
	
	//Salvar as informacoes
	FILE *config;
	config = fopen("config.txt", "w");
	printf("Cadastrar adminstrator do sistema \n");
	//User
	printf("Digite o login desejado: ");
	scanf("%s", &userADM);
	//Pass
	printf("A senha desejada: ");
	scanf("%s", &passADM);
	printf("Confirme a senha desejada: ");
	scanf("%s", &pCONFIRM);
	//Salvar config
	fprintf(config, "%s %s", &userADM, &passADM);
	fclose(config);
	
	//Arrumar o sistema para checkar as senhas
	/* if(userADM == uCONFIRM){
		printf("Login salvo!");
		fprintf(config, "%s %s", &userADM, &passADM);
		fclose(config);
	} else {
		printf("As senhas não são iguais. Tente novamente !\n");
		cadastroADM();
	} */
}

void loginADM(){
	//Chars config.txt
	char userADM[9];
	char passADM[9];
	//Char verificar
	char checkUSER[9];
	char checkPASS[9];
	//Config
	FILE *config;
	config = fopen("config.txt", "r");
	fscanf(config, "%s %s", &userADM, &passADM);
	//Tela
	printf("Tela de loginxx \n");
	printf("Digite o seu login: ");
	scanf("%s", &checkUSER);
	printf("Digite a sua senha: ");
	scanf("%s", &checkPASS);
	//Verificar login e senha
	if(strcmp(checkUSER, userADM)==0){
		if(strcmp(checkPASS, passADM)==0){
			printf("Logado");
		} 	else {
			printf("Login ou senha invalido");
		}
}


