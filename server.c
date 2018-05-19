#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void Register();
void userManage();
void topicManage();
void Stats();
int validateUser();
void listUsers();
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
			else if (option == 2) {
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
  FILE *Accepted;
Accepted = fopen("Accepted.txt", "r");
int c;
if (Accepted) {
  while ((c = getc(Accepted)) != EOF)
      putchar(c);
  fclose(Accepted);
}
sleep(2);
system("clear");
//return;
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

int validateUser()
{
    FILE * Accepted, *Pendent;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    char usernameFromClient[20];

    Accepted = fopen("Accepted.txt", "a+");
    if (Accepted == NULL)
        exit(EXIT_FAILURE);
    Pendent = fopen("Pendent.txt", "r+");
    fgets(usernameFromClient, 20, Pendent);
    printf("Pendent= %s\n",usernameFromClient);//debug

    while ((read = getline(&line, &len, Accepted)) != -1) { //le Accepted.txt linha a linha
        printf("Retrieved line of length %zu :\n", read);//debug
        printf("%s", line);// debug
        if(strcmp(line, usernameFromClient) == 0){
          puts("> Nome de utilizador já existente. Por favor escolha um novo que não exceda os 20 carateres.");
					sleep(3);
					system("clear");
          return 0;

        }
      }
          puts(">Nome de utilizador aceite.");
          fputs(usernameFromClient, Accepted);

    fclose(Accepted);
    fclose(Pendent);
		sleep(3);
		system("clear");
		return 0;
}

void Login(){
	char kuser[5],admin1[5], rootpass1[5], password[5];
	FILE *admin, *rootpass;
	puts("*****************Login*****************");
	printf("\n> Introduza o nome de utilizador:  ");
	printf("\n> Nome de utilizador:");
	scanf("%s", kuser);
	printf("\n> Introduza a palavra-passe:  ");
	printf("\n> palavra-passe:");
	scanf("%s", password);
	admin = fopen("admin.txt", "r");
	fgets(admin1, 5,admin );
	rootpass = fopen("rootpass.txt", "r");
	fgets(rootpass1,5, rootpass);
	  if((strcmp(kuser,admin1) == 0) && (strcmp(password, rootpass1))==0){
	    puts("correto");
	  }
	  else{
	    puts("errado");
	  }

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
