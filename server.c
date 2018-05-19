#define _GNU_SOURCE
#define MAX 256
#define MAX1 400
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void Login();
void Register();
void userManage();
void topicManage();
void Stats();
int validateUser();
void listUsers();
void mainMenu();
int removeUser();
int changeContact();
int changeName();
int changeUsername();

/*
int changePassword();
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


void Register(){ //menu de registo * main menu
	unsigned int option;
		while (1) {
			puts("\n***** Menú de Registo *****");
			puts("1 - Validar Utilizador");
			puts("2 - Retroceder para o Menú Principal");
			puts("3 - Sair");
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
				mainMenu();
			}
			else if (option == 3) {
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
			else if (option == 3) {
				system("clear");
				removeUser();
			}

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
int removeUser(){ // *menu de gestao de utilizadores
int lno, ctr = 0;
char ch;
FILE *fptr1, *fptr2;
char fname[MAX];
char str[MAX], temp[] = "temp.txt";
printf("\n\n Eliminar um determinado utilizador :\n");
printf("-----------------------------------------\n");
printf(" Introduza o nome do ficheiro : ");
scanf("%s",fname);
fptr1 = fopen(fname, "r");
if (!fptr1)
{
				printf(" Ficheiro não encontrado ou não é possivel abrir o ficheiro.\n");
				sleep(2);
				system("clear");
				return 0;
}
fptr2 = fopen(temp, "w"); // abre o ficheiro temporário em modo de leitura
if (!fptr2)
{
				printf("Não é possivel abrir um ficheiro temporário.\n");
				fclose(fptr1);
				sleep(2);
				system("clear");
				return 0;
}
printf(" Escreva o número da linha que pretende remover : ");
scanf("%d", &lno);
lno++;
// copia todo o conteudo exceto a linha em especifico
while (!feof(fptr1))
{
		strcpy(str, "\0");
		fgets(str, MAX, fptr1);
		if (!feof(fptr1))
		{
				ctr++;
				/*salta a linha */
				if (ctr != lno)
				{
						fprintf(fptr2, "%s", str);
				}
		}
}
fclose(fptr1);
fclose(fptr2);
remove(fname);  		// remove o ficheiro original
rename(temp, fname); 	// renomear o ficheiro temporario com o nome original
/*------ ler o ficheiro ----------------*/
fptr1=fopen(fname,"r");
		ch=fgetc(fptr1);
	printf(" O conteúdo do ficheiro %s é : \n",fname);
	while(ch!=EOF)
		{
				printf("%c",ch);
				 ch=fgetc(fptr1);
		}
fclose(fptr1);
sleep(3);
system("clear");
return 0;
}

int changeContact(){ // *menu de gestao de utilizadores
	//char ch;
	FILE *fptr1, *fptr2;
	int lno, linectr = 0;
	char str[MAX1],fname[MAX1];
	char newln[MAX1], temp[] = "temp.txt";
//primeira linha tem indice 0
//ficheiro a abrir e contacto.txt

printf("\n\n ******************** Alterar Contacto ******************** :\n");
printf("-------------------------------------------------------------\n");
printf(" Nome do ficheiro a alterar : ");
	fgets(fname, MAX1 , stdin);
	fname[strlen(fname) - 1] = '\0';
	fptr1 = fopen(fname, "r");
	if (!fptr1)
	{
					printf("Não foi possível abrir o ficheiro.\n");
					sleep(2);
					system("clear");
					return 0;
	}
	fptr2 = fopen(temp, "w");
	if (!fptr2)
	{
					printf("Não foi possível abrir o ficheiro temporário.\n");
					fclose(fptr1);
					sleep(2);
					system("clear");
					return 0;
	}
	/* get the new line from the user */
	printf(" Escreva o novo contacto : ");
	fgets(newln,MAX1, stdin);
	/* get the line number to delete the specific line */
	printf(" Escreva a linha que pretende alterar : ");
	scanf("%d", &lno);
	lno++;
	 // copy all contents to the temporary file other except specific line
	while (!feof(fptr1))
	{
			strcpy(str, "\0");
			fgets(str, MAX1, fptr1);
			if (!feof(fptr1))
			{
					linectr++;
					if (linectr != lno)
							{
									fprintf(fptr2, "%s", str);
							}
							else
							{
									fprintf(fptr2, "%s", newln);
							}
					}
	}
/*  fptr2=fopen(temp,"r");
					 ch=fgetc(fptr2);
				 printf(" Now the content of the file %s is : \n",fname);
				 while(ch!=EOF)
					 {
							 printf("%c",ch);
								ch=fgetc(fptr1);
					 }
*/
	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	printf(" Alteração realizada com sucesso! \n");
	sleep(2);
	system("clear");
	return 0;
}

int changeName(){ // *menu de gestao de utilizadores
	//ficheiro a abrir e nome.txt
	//char ch;
	FILE *fptr1, *fptr2;
	int lno, linectr = 0;
	char str[MAX1],fname[MAX1];
	char newln[MAX1], temp[] = "temp.txt";
//primeira linha tem indice 0

printf("\n\n ******************** Alterar Nome ******************** :\n");
printf("-------------------------------------------------------------\n");
printf(" Nome do ficheiro a alterar : ");
	fgets(fname, MAX1 , stdin);
	fname[strlen(fname) - 1] = '\0';
	fptr1 = fopen(fname, "r");
	if (!fptr1)
	{
					printf("Não foi possível abrir o ficheiro.\n");
					sleep(2);
					system("clear");
					return 0;
	}
	fptr2 = fopen(temp, "w");
	if (!fptr2)
	{
					printf("Não foi possível abrir o ficheiro temporário.\n");
					fclose(fptr1);
					sleep(2);
					system("clear");
					return 0;
	}
	/* get the new line from the user */
	printf(" Escreva o novo nome : ");
	fgets(newln,MAX1, stdin);
	/* get the line number to delete the specific line */
	printf(" Escreva a linha que pretende alterar : ");
	scanf("%d", &lno);
	lno++;
	 // copy all contents to the temporary file other except specific line
	while (!feof(fptr1))
	{
			strcpy(str, "\0");
			fgets(str, MAX1, fptr1);
			if (!feof(fptr1))
			{
					linectr++;
					if (linectr != lno)
							{
									fprintf(fptr2, "%s", str);
							}
							else
							{
									fprintf(fptr2, "%s", newln);
							}
					}
	}
/*  fptr2=fopen(temp,"r");
					 ch=fgetc(fptr2);
				 printf(" Now the content of the file %s is : \n",fname);
				 while(ch!=EOF)
					 {
							 printf("%c",ch);
								ch=fgetc(fptr1);
					 }
*/
	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	printf(" Alteração realizada com sucesso! \n");
	sleep(2);
	system("clear");
	return 0;
}

int changeUsername(){ // *menu de gestao de utilizadores
	//ficheiro a abrir e Accepted.txt
	//char ch;
	FILE *fptr1, *fptr2;
	int lno, linectr = 0;
	char str[MAX1],fname[MAX1];
	char newln[MAX1], temp[] = "temp.txt";
//primeira linha tem indice 0

printf("\n\n ******************** Alterar Nome ******************** :\n");
printf("-------------------------------------------------------------\n");
printf(" Nome do ficheiro a alterar : ");
	fgets(fname, MAX1 , stdin);
	fname[strlen(fname) - 1] = '\0';
	fptr1 = fopen(fname, "r");
	if (!fptr1)
	{
					printf("Não foi possível abrir o ficheiro.\n");
					sleep(2);
					system("clear");
					return 0;
	}
	fptr2 = fopen(temp, "w");
	if (!fptr2)
	{
					printf("Não foi possível abrir o ficheiro temporário.\n");
					fclose(fptr1);
					sleep(2);
					system("clear");
					return 0;
	}
	/* get the new line from the user */
	printf(" Escreva o novo nome : ");
	fgets(newln,MAX1, stdin);
	/* get the line number to delete the specific line */
	printf(" Escreva a linha que pretende alterar : ");
	scanf("%d", &lno);
	lno++;
	 // copy all contents to the temporary file other except specific line
	while (!feof(fptr1))
	{
			strcpy(str, "\0");
			fgets(str, MAX1, fptr1);
			if (!feof(fptr1))
			{
					linectr++;
					if (linectr != lno)
							{
									fprintf(fptr2, "%s", str);
							}
							else
							{
									fprintf(fptr2, "%s", newln);
							}
					}
	}
/*  fptr2=fopen(temp,"r");
					 ch=fgetc(fptr2);
				 printf(" Now the content of the file %s is : \n",fname);
				 while(ch!=EOF)
					 {
							 printf("%c",ch);
								ch=fgetc(fptr1);
					 }
*/
	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	printf(" Alteração realizada com sucesso! \n");
	sleep(2);
	system("clear");
	return 0;
}
int changePassword(){ // *menu de gestao de utilizadores
	//char ch;
	FILE *fptr1, *fptr2;
	int lno, linectr = 0;
	char str[MAX1],fname[MAX1];
	char newln[MAX1], temp[] = "temp.txt";
	//primeira linha tem indice 0

	printf("\n\n ******************** Alterar Palavra-Passe de Acesso Root ******************** :\n");
	printf("-------------------------------------------------------------\n");
	//ficheiro rootpass.txt
	printf(" Nome do ficheiro a alterar : ");
	fgets(fname, MAX1 , stdin);
	fname[strlen(fname) - 1] = '\0';
	fptr1 = fopen(fname, "r");
	if (!fptr1)
	{
					printf("Não foi possível abrir o ficheiro.\n");
					sleep(2);
					system("clear");
					return 0;
	}
	fptr2 = fopen(temp, "w");
	if (!fptr2)
	{
					printf("Não foi possível abrir o ficheiro temporário.\n");
					fclose(fptr1);
					sleep(2);
					system("clear");
					return 0;
	}
	/* get the new line from the user */
	printf(" Escreva a nova palavra-passe de acesso root de quatro caracteres : ");
	fgets(newln,MAX1, stdin);
	/* get the line number to delete the specific line */
	printf(" Escreva a linha que pretende alterar : "); // é sempre a linha 0
	scanf("%d", &lno);
	lno++;
	 // copy all contents to the temporary file other except specific line
	while (!feof(fptr1))
	{
			strcpy(str, "\0");
			fgets(str, MAX1, fptr1);
			if (!feof(fptr1))
			{
					linectr++;
					if (linectr != lno)
							{
									fprintf(fptr2, "%s", str);
							}
							else
							{
									fprintf(fptr2, "%s", newln);
							}
					}
	}
	/*  fptr2=fopen(temp,"r");
					 ch=fgetc(fptr2);
				 printf(" Now the content of the file %s is : \n",fname);
				 while(ch!=EOF)
					 {
							 printf("%c",ch);
								ch=fgetc(fptr1);
					 }
	*/
	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	printf(" Alteração realizada com sucesso! \n");
	sleep(2);
	system("clear");
	return 0;
}


void listUsers(){ // *menu de gestao de utilizadores
  FILE *Accepted;
puts("******Lista de Utilizadores******");
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
			if (option == 1) {
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

			else if (option == 5) {
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
	    puts("Nome de utilizador e palavra-passe corretos. Bem-vindo!");
			sleep(2);
			system("clear");
			mainMenu();
	  }
	  else{
	    puts("Nome de utilizador ou palavra-passe errados. Por favor tente novamente.");
			sleep(2);
			system("clear");
			Login();
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
Login();
//mainMenu();
//Register();
//listUsers();

//userManage();
//Stats();
return 0;
}
