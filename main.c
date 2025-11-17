#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


typedef struct {
    char nome []
    char especializacao []


} medico;

typedef struct {
    char nome [100];
    int idade;
    char genero[20]



}paciente;



int main()
{
    setlocale(LC_ALL,"portuguese");

    char logincerto[] = "jubileu";
    char senhacerta [] = "ponfrey";
    char usuario[50];
    char senha[50], opcao;


    printf("-----LOGIN-----\n");


    printf("Insira seu usuário:");
    scanf("%s", usuario);

    printf("Insira sua senha:");
    scanf("%s", senha);


    if (strcmp(usuario,logincerto)==0 && strcmp(senha,senhacerta)==0){
        printf("\n-----Login be sucedido!-----\n");

    do{

    printf("-----MENU PRINCIPAL-----"); //desenvolver cada opção
    printf("\n1 - Cadastrar médico\n");
    printf("2 - Marcar consulta\n");
    printf("3 - Listar consulta\n");
    printf("4 - Confirmar consulta\n");
    printf("5 - Finalizar\n");
    printf("------------------------\n");
    printf("Escolha uma opção:");
    scanf("%d",&opcao);


switch(opcao){  //um monte de array,pra consulta e etc
    case 1:
        printf("Você escolheu: Cadastrar médico\n"); break;  //struct medico
    case 2:
        printf("Você escolheu: Marcar consulta\n"); break;
    case 3:
        printf("Você escolheu: Cadastrar médico\n");break;
    case 4:
        printf("Você escolheu: Listar consulta\n"); break;
    case 5:
        printf("Você escolheu: Finalizar\n");break;
    default:
        printf("Opção inválida!");
    }
    }
    while (opcao !=5);
    }

    else {
        printf("\nUsuário ou senha incorretos!\n");
    }

    return 0;
}
