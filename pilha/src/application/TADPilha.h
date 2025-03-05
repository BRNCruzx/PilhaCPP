#define MAXPILHA 10

struct TpPilha {
    int topo;
    char pilha[MAXPILHA];
} ;
void inicializaPilha(TpPilha &p);
void push(TpPilha &p, char Elemento);
char pop(TpPilha &p);
char elementoTopo(TpPilha p);
int pilhaVazia(TpPilha p);
int pilhaCheia(TpPilha p);
void imprimePilha(TpPilha p);
void concatenar(TpPilha &p1 , TpPilha &p2);

void inicializaPilha(TpPilha &p) {
    p.topo = -1;
}

void push(TpPilha &p, char Elemento){
    p.pilha[++p.topo] = Elemento;
}
char pop(TpPilha &p){
    return p.pilha[p.topo--];
}
char elementoTopo(TpPilha p){
    return p.pilha[p.topo];
}
int pilhaVazia(TpPilha p){
    return p.topo == -1;
}
int pilhaCheia(TpPilha p){
    return p.topo == MAXPILHA - 1;
}
void imprimePilha(TpPilha p){
    while(!pilhaVazia(p)){
       printf("%c\n", pop(p));
      
    }
}
void concatenar(TpPilha &p1 , TpPilha &p2){
	TpPilha aux;
	inicializaPilha(aux);
	
	while(!pilhaVazia(p2)){
		push(aux,pop(p2));
	}
	
	while(!pilhaVazia(aux)){
		push(p1,pop(aux));
	}
	
}


