#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include "meuconio.h"
#include "TADPilha.h"



void executar();
char menu();
char menuPilha(void);
int main(void) {
    executar();
    return 0;
}

void executar(void) {
    TpPilha p1, p2;
    char opcao;
    char op;
    char c; 

    do {
    	system("cls");
        opcao = menuPilha(); 
        
     
        switch (opcao) {
            case '1': {
                do {
                    system("cls");
                    gotoxy(40,2);printf("Pilha 1 \n");
                    op = menu();  

                    switch (op) {
                        case 'A':
                            if (pilhaCheia(p1)) {
                                printf("Pilha Cheia\n");
                            } else {
                                inicializaPilha(p1);
                            }
                            break;
                        case 'B':
                            if (pilhaCheia(p1)) {
                                printf("Pilha Cheia\n");
                            } else {
                                printf("Digite um caractere: ");
                                scanf(" %c", &c);  
                                push(p1, c);  
                            }
                            break;
                        case 'C':
                            if (pilhaVazia(p1)) {
                                printf("Pilha Vazia\n");
                            } else {
                                char elemento = pop(p1);  
                                printf("Elemento removido: %c\n", elemento);
                            }
                            break;
                        case 'D':
                            if (pilhaVazia(p1)) {
                                printf("Pilha Vazia\n");
                            } else {
                                char elemento = elementoTopo(p1); 
                                printf("Elemento do topo: %c\n", elemento);
                            }
                            break;
                        case 'E':
                            if (pilhaVazia(p1)) {
                                printf("Pilha Vazia\n");
                            } else {
                                imprimePilha(p1);  
                            }
                            break;
                    }
                } while (op != 27);  
                break;
            }
            case '2': {
                do {
                    system("cls");
                    printf("Pilha 2 \n");
                    op = menu();  
                    printf("Opção selecionada para Pilha 2: %c\n", op);  

                    switch (op) {
                        case 'A':
                            if (pilhaCheia(p2)) {
                                printf("Pilha Cheia\n");
                            } else {
                                inicializaPilha(p2);
                            }
                            break;
                        case 'B':
                            if (pilhaCheia(p2)) {
                                printf("Pilha Cheia\n");
                            } else {
                                printf("Digite um caractere: ");
                                scanf(" %c", &c);
                                push(p2, c);  
                            }
                            break;
                        case 'C':
                            if (pilhaVazia(p2)) {
                                printf("Pilha Vazia\n");
                            } else {
                                char elemento = pop(p2);  
                                printf("Elemento removido: %c\n", elemento);
                            }
                            break;
                        case 'D':
                            if (pilhaVazia(p2)) {
                                printf("Pilha Vazia\n");
                            } else {
                                char elemento = elementoTopo(p2); 
                                printf("Elemento do topo: %c\n", elemento);
                            }
                            break;
                        case 'E':
                            if (pilhaVazia(p2)) {
                                printf("Pilha Vazia\n");
                            } else {
                                imprimePilha(p2);  
                                getch();
                            }
                            break;
                    }
                } while (op != 27);  
                break;
            }
            case '3':
                system("cls");
                printf("Concatenar\n");
                concatenar(p1, p2);  
                if (pilhaVazia(p1)) {
                    printf("Pilha Vazia\n");
                } else {
                    imprimePilha(p1);  
                    getch();  
                }
                break;
        }
    } while (opcao != '4');  
}


char menuPilha(void){
	gotoxy(40,1);printf("[1]- Pilha 1\n");
	gotoxy(40,2);printf("[2]-Pilha 2\n");
	gotoxy(40,3);printf("[3]-Concatenar Pilhas\n");
	gotoxy(40,4);printf("[4]-Sair\n");
	return 	getche();
}

char menu(void){
    char op;
    gotoxy(40,2);printf("A - Inicializa Pilha\n");
    gotoxy(40,3);printf("B - Inserir Elemento\n");
    gotoxy(40,4);printf("C - Remover Elemento\n");
    gotoxy(40,5);printf("D - Elemento do Topo\n");
    gotoxy(40,6);printf("E - Imprimir Pilha\n");
    gotoxy(40,7);printf("ESC - Sair\n");
    gotoxy(40,8);printf("Digite a opcao: ");
    fflush(stdin);
    gotoxy(20,9);return op = toupper(getch());;
}

