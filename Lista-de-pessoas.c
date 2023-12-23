#include<stdio.h>
#include<stdlib.h>

struct Pessoas{
int idade;
int peso;
struct Pessoas *prox;
};

typedef struct Pessoas Pessoa;
Pessoa *controle;

void pushback( int idade_ , int peso_ ){
    Pessoa *a= (Pessoa*) malloc(sizeof(Pessoa));
 a->idade=idade_;
 a->peso=peso_;
 
 a->prox=controle; //aponta para o endereço do ponteiro de controle
 controle=a; //armaneza o endereço de A 
}

int main(){
    pushback(12 , 90); // coloquei na minha lista de pessoas 
}

