#include <stdio.h>
#include <ctype.h>
#include ".entities/TADPilha.h"


void executar();
char menu();
int main(void) {
    executar();
    return 0;
}

void executar(void){
    do{
        char op = menu();
        TpPilha p;
        char c;
   
        switch (op)
        {
            case 'A':
                if(pilhaCheia(p)){
                    printf("Pilha Cheia\n");
                }else{
                    inicializaPilha(p);
                }
                break;
            case 'B':
                if(pilhaCheia(p)){
                    printf("Pilha Cheia\n");
                }else{
                    printf("Digite um caractere: ");
                    scanf(" %c", &c);
                    push(p, c);
                }
                break;
            case 'C':
                if(pilhaVazia(p)){
                    printf("Pilha Vazia\n");
                }else{
                    char elemento  = pop(p);
                    printf("Elemento removido: %c\n", elemento);
                }
                break;
            case 'D':
                if(pilhaVazia(p)){
                    printf("Pilha Vazia\n");
                }else{
                    printf("Elemento do topo: %c\n", elementoTopo(p));
                }
                break;
        
            case 'E':
                if(pilhaVazia(p)){
                    printf("Pilha Vazia\n");
                }else{
                    imprimePilha(p);
                }
                break;
        
            default:
                "Opção inválida\n";
                break;
        }
    }while (op != 27);

    
   
}

char menu(void){
    char op;
    printf("A - Inicializa Pilha\n");
    printf("B - Inserir Elemento\n");
    printf("C - Remover Elemento\n");
    printf("D - Elemento do Topo\n");
    printf("E - Imprimir Pilha\n");
    printf("ESC - Sair\n");
    printf("Digite a opção: ");
    op = toupper(getc());
    printf("%c\n", op);
    return op;
}

