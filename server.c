#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define True
#define False

void Register();
void userManage();
void topicManage();
void Stats();
/*void removeUser();
void changeContact();
void changeName();
void changeUsername();
void changePassword();
void listUsers();
void editUsers();
void createTopic();
void modifyTopic();
void activeTopics();
void mostUsedTopics();
void totalMessages();
void totalMessages();
void userInteractTopic();
void subscribeTopicUser();
void validateUser();
void Login();
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
				system("clear");
				validateUser();

			}
			/*else if (option == 2) {
				system("clear");
				Login();
			}
			*/
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
			/*if (option == 1) {
				system("clear");
				listUsers();
			}
			*/
			/*else*/ /*if (option == 2) {
				system("clear");
				editUsers();
			}
			/*else if (option == 3) {
				system("clear");
				removeUser();
			}
			*/
			/*else */if (option == 4) {
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

/*void listUsers(){ // *menu de gestao de utilizadores

}*/
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
	FILE *username_pass;
	char username[20], userFromClient="Margarida";
	/* abertura do ficheiro username.txt no modo de leitura*/
	username_pass = fopen("username_pass.txt", "r");
	fscanf(username_pass, "%s", &username);
	if(strcmp(username,userFromClient)==True){  //debug //arranjar forma de ir buscar o input.txt a coluna de username
		puts("O nome de utilizador já existe. Insira um novo que não exceda os vinte caracteres. ");
	}
	else{
		puts("Nome de utilizador aceite.");
	}
	//system("clear");
	//validateUser();

}




/*void Login(){ //verificar se as credenciais de login estão corretas * menu registo
//incompleto
}
*/

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
//Register();
//userManage();
//Stats();
return 0;
}
