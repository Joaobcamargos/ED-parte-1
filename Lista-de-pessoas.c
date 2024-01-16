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
 a->prox=controle; 
 controle=a; 
}
void pushback( int idade_ , int peso_ ){ 
    Pessoa *a= (Pessoa*) malloc(sizeof(Pessoa)); 
 a->idade=idade_; //
 a->peso=peso_;
 a->prox=NULL; 
 if(controle==NULL){
    controle=a;
 }else{
    Pessoa *aux=controle;
    while (aux=!NULL){
      aux=aux->prox;
    }
  aux->prox=a;
 }
}
void printlist(Pessoa *ptr){
    if(ptr!=NULL){
        printf("\nPeso: %d Idade:%d",ptr->idade,ptr->peso);
        printlist(ptr->prox);
    }
}
int main(){
    pushfront(12 , 90); 
    pushfront(13 , 20);
    pushfront(11 , 10);
    Pessoa *aux=controle;
    printlist(aux);
}

