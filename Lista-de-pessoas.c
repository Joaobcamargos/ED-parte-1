#include<stdio.h>
#include<stdlib.h>

struct Pessoas{
int idade;
int peso;
struct Pessoas *prox;
};

typedef struct Pessoas Pessoa;
Pessoa *controle;

void pushfront( int idade_ , int peso_ ){
    Pessoa *a= (Pessoa*) malloc(sizeof(Pessoa));
 a->idade=idade_;
 a->peso=peso_;
 a->prox=controle; //aponta para o endereço do ponteiro de controle
 controle=a; //armaneza o endereço de A 
}
void printlist(){
    Pessoa *aux=controle;
    while(aux!=NULL){
        printf("Peso: %d Idade:%d",aux->idade,aux->peso);
        aux=aux->prox;
    }
}
int main(){
    pushfront(12 , 90); // coloquei na minha lista de pessoas 
}

