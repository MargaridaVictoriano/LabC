#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void Register();
void userManage();
void topicManage();
void Stats();
void validateUser();
void listUsers();
void Login();
/*void removeUser();
void changeContact();
void changeName();
void changeUsername();
void changePassword();
void editUsers();
void createTopic();
void modifyTopic();
void activeTopics();
void mostUsedTopics();
void totalMessages();
void totalMessages();
void userInteractTopic();
void subscribeTopicUser();

*/
void mainMenu();

void Register(){ //menu de registo * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Registo *****");
			puts("1 - Validar Utilizador");
			puts("2 - Login");
			puts("3 - Retroceder para o Menú Principal");
			puts("4 - Sair");
			printf("\n> Introduza uma das opções dadas ");
			printf("\n> ");
			scanf("%d", &option);
			getchar();
			if (option == 1) {
				puts("aaaaaaa");//debug
				system("clear");
				validateUser();

			}
			else if (option == 2) {
				system("clear");
				Login();
			}

			else if (option == 3) {
				system("clear");
				mainMenu();
			}
			else if (option == 4) {
				system("clear");
				exit(0);
			}
			else {
				system("clear");
				puts("> Opção Inválida. Por favor tente de novo.");
				sleep(2);
				system("clear");
				Register();
			}
		}
}

void userManage(){ //gestão de utilizadores * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Gestão de Utilizadores *****");
			puts("1 - Listar todos os Utilizadores");
			puts("2 - Editar Utilizadores");
			puts("3 - Remover Utilizadores");
			puts("4 - Retroceder para o Menú Principal");
			puts("5 - Sair");
			printf("\n> Introduza uma das opções dadas ");
			printf("\n> ");
			scanf("%d", &option);
			getchar();
			if (option == 1) {
				system("clear");
				listUsers();
			}
			/*else*/ /*if (option == 2) {
				system("clear");
				editUsers();
			}
			/*else if (option == 3) {
				system("clear");
				removeUser();
			}
			*/
			else if (option == 4) {
				system("clear");
				mainMenu();
			}
			else if (option == 5) {
				system("clear");
				exit(0);
			}
			else {
				system("clear");
				puts("> Opção Inválida. Por favor tente de novo.");
				sleep(2);
				system("clear");
				userManage();
			}
		}
}
/*void removeUser(){ // *menu de gestao de utilizadores
//incompleto
}
*/

/*void changeContact(){ // *menu de gestao de utilizadores
// incompleto
}
*/
/*void changeName(){ // *menu de gestao de utilizadores
//incompleto
}
*/
/*void changeUsername(){ // *menu de gestao de utilizadores
//incompleto
}*/
/*void changePassword(){ // *menu de gestao de utilizadores
//incompleto
}
*/

void listUsers(){ // *menu de gestao de utilizadores
	FILE *allUsers;
	allUsers = fopen("Accepted.txt", "r");
	int c;
	if (allUsers) {
    while ((c = getc(allUsers)) != EOF)
        putchar(c);
    fclose(allUsers);
}
sleep(2);
system("clear");
}
void editUsers(){ // *menu de gestao de utilizadores
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Edição de Utilizadores *****");
			puts("1 - Alterar Contacto");
			puts("2 - Alterar Nome");
			puts("3 - Alterar Nome de Utilizador");
			puts("4 - Alterar Palavra-Passe");
			puts("5 - Retroceder para o Menú de Gestão de Utilizadores");
			puts("6 - Sair");
			printf("\n> ");
			scanf("%d", &option);
			getchar();
			/*if (option == 1) {
				system("clear");
				changeContact();
			}
			else if (option == 2) {
				system("clear");
				changeName();
			}
			else if (option == 3) {
				system("clear");
				changeUsername();
			}
			else if (option == 4) {
				system("clear");
				changePassword();
			}
			*/
			/*else */if (option == 5) {
				system("clear");
				userManage();
			}
			else if (option == 6) {
				system("clear");
				exit(0);
			}
			else {
				system("clear");
				puts("> Opção Inválida. Por favor tente de novo.");
				sleep(2);
				system("clear");
				editUsers();
				}
		}
}

void topicManage() { //gestão de tópicos * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Gestão de Tópicos *****");
			puts("1 - Criar Tópico");
			puts("2 - Modificar Tópico");
			puts("3 - Retroceder para o Ménu Principal");
			puts("4 - Sair");
			printf("\n> ");
			scanf("%d", &option);
			getchar();
			/*if (option == 1) {
				system("clear");
				createTopic();
			}
			else if (option == 2) {
				system("clear");
				modifyTopic();
			}
			*/
			/*else */if (option == 3) {
				system("clear");
				mainMenu();
			}
			else if (option == 4) {
				system("clear");
				exit(0);
			}
			else {
				system("clear");
				puts("> Opção Inválida. Por favor tente de novo.");
				sleep(2);
				system("clear");
				topicManage();
			}
		}
}
/*void createTopic(){ // *menu gestao topicos
//incompleto
}
*/
/*void modifyTopic(){ // *menu gestao topicos
//incompleto
}
*/

void Stats(){ //estatisticas * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Estatísticas *****");
			puts("1 - Número de Tópicos Ativos"); //activeTopics
			puts("2 - Lista dos Tópicos Mais Usados"); // mostUsedTopics
			puts("3 - Número Total de Mensagens de um Determinado Tópico"); //criar menu para escolher topico totalMessages
			puts("4 - Número de Utilizadores que Interagiram com um Determinado Tópico"); //criar menu para escolher topico **userInteractTopic
			puts("5 - Tópicos Subscritos por um Determinado Utilizador"); //subscribeTopicUser
			puts("6 - Retroceder para o Menú Principal ");
			puts("7 - Sair ");
			printf("\n> ");
			scanf("%d", &option);
			getchar();
			/*if (option == 1) {
				system("clear");
				activeTopics();
			}
			else if (option == 2) {
				system("clear");
				mostUsedTopics();
			}
			else if (option == 3) {
				system("clear");
				totalMessages();
			}
			else if (option == 4) {
				system("clear");
				userInteractTopic();
			}
			else if (option == 5) {
				system("clear");
				subscribeTopicUser();
			}
			*/
			/*else*/ if (option == 6){
				system("clear");
				mainMenu();
			}
			else if (option == 7) {
				system("clear");
				exit(0);
			}
			else {
				system("clear");
				puts("> Opção Inválida. Por favor tente de novo.");
				sleep(2);
				system("clear");
				Stats();
			}
		}
}
/*void activeTopics(){ //menu estatisticas
	//incompleto
}
*/
/*void mostUsedTopics(){ //menu estatisticas
	//incompleto
}
*/
/*void totalMessages(){ //menu estaticas
	//incompleto
}
*/
/*void userInteractTopic(){ //menu estaticas
	//incompleto
}
*/
/*void subscribeTopicUser(){ //menu estaticas
	//incompleto
}
*/

void validateUser(){ //validar utilizadores * menu registo
	FILE *Pendent, *Accepted, *deniedMessage, *acceptedMessage; //ficheiro enviado pelo servidor com todos os dados(Pendent) fiheiro com todos os usernames e passwd aceites(Acceptee)
	char username[20], usernameFromClient[20];
	Pendent = fopen("Pendent.txt", "r+");
	for(int i=0; fgets(usernameFromClient, 20, Pendent)!=NULL; i++){
		Accepted = fopen("Accepted.txt", "r");
		//printf("Pendent= %s\n",usernameFromClient); debug
		for(int j=0; fgets(username, 20, Accepted)!=NULL; j++){
			//printf("Accepted= %s\n",username); debug
			if(strcmp(usernameFromClient, username) == 0){
				deniedMessage = fopen("deniedMessage.txt", "r");
				puts("O nome de utilizador inserido já existe. Por favor defina um novo nome de utilizador que não exceda os 20 caracteres");
				sleep(2);
				system("clear");
				break;
			}
			else{
				acceptedMessage = fopen("acceptedMessage.txt", "r");
				puts("Nome de utilizador aceite.");
				sleep(2);
				system("clear");
			}
			fclose(deniedMessage);
			fclose(acceptedMessage);
			}
			fclose(Accepted);

		}
		fclose(Pendent);
	}


void Login(){ //verificar se as credenciais de login estão corretas * menu registo
//FILE *UserPass, *Accepted;
char usernameFromClient[20], username[20];
printf("\n> Introduza o nome de utilizador:  ");
printf("\n> Nome de utilizador:  ");
scanf("%s", &username);
/*
UserPass = fopen("UserPass.txt", "r");
Accepted = fopen("Accepted.txt", "r");
for(int i=0;fgets(usernameFromClient, 20, Accepted); i++){
	if(strcmp(usernameFromClient, username) == 0){
		puts("aaaa"); //debug
		pause(); //debug
		puts("Nome de utilizador aceite.");
	}
	else{
		puts("Nome de utilizador incorreto. Por favor tente novamente.");
		break;
	}
	}
*/
}

void mainMenu(){
unsigned int option;
	while (1) {
		puts("\n***** Menú Principal *****");
		puts("1 - Menú de Registo"); // Register
		puts("2 - Menú de Gestão de Utilizadores"); // userManage
		puts("3 - Menú de Gestão de Tópicos"); //topicManage
		puts("4 - Menú de Estatísticas");//Stats
    puts("5 - Sair");
		printf("\n> ");
		scanf("%d", &option);
		getchar();
		if (option == 1) {
			system("clear");
			Register();
		}
		else if (option == 2) {
			system("clear");
			userManage();
		}
		else if (option == 3) {
			system("clear");
			topicManage();
		}
		else if (option == 4) {
			system("clear");
			Stats();
		}
		else if (option == 5){
			system("clear");
			exit(0);
		}
    else{
			system("clear");
      puts("> Opção Inválida. Por favor tente de novo.");
			sleep(2);
			system("clear");
			mainMenu();
    }
	}
}

int main(void){
system("clear");
mainMenu();
Register();
listUsers();
//userManage();
//Stats();
return 0;
}
