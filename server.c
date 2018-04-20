#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			/*else*/ if (option == 3) {
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
			/*else*/ if (option == 2) {
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
			puts("6 - Exit");
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
				puts("> Invalid option! Please try again.");
				sleep(2);
				system("clear");
				editUsers();
				}
		}
}

void topicManage() { //gestão de tópicos * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Topic Management Menu *****");
			puts("1 - Create Topic");
			puts("2 - Modify Topic");
			puts("3 - Exit to Main Menu");
			puts("4 - Exit");
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
				puts("> Invalid option! Please try again.");
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
			puts("\n***** Statistics Menu *****");
			puts("1 - Number of Active Topics"); //activeTopics
			puts("2 - List of Most Used Topics"); // mostUsedTopics
			puts("3 - Total Messages from Choosen Topic"); //criar menu para escolher topico totalMessages
			puts("4 - Number of Users who Interacted on a Choosen Topic"); //criar menu para escolher topico **userInteractTopic
			puts("5 - Subscribed Topics by a Specific User"); //subscribeTopicUser
			puts("6 - Exit to Main Menu ");
			puts("7 - Exit ");
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
				puts("> Invalid option! Please try again.");
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
char username[20];
scanf("%s", &username);
if(username == "margarida")/*»arranjar forma de ir buscar o input.txt a coluna de username*/	{
	printf("O nome de utilizador já existe. Insira um novo que não exceda os vinte caracteres. \n");

}
}


/*void Login(){ //verificar se as credenciais de login estão corretas * menu registo
//incompleto
}
*/

void mainMenu(){
unsigned int option;
	while (1) {
		puts("\n***** Main Menu *****");
		puts("1 - Register Menu"); // Register
		puts("2 - User Management"); // userManage
		puts("3 - Topic Management"); //topicManage
		puts("4 - Statistics");//Stats
    puts("5 - Exit");
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
      puts("> Invalid Option! Please try again.");
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
