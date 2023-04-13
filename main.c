#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct lista {
 int itens[MAX];
 int n;

} Lista;

Lista* criarLista() {
 Lista *l = (Lista*) malloc(sizeof(Lista));
 l->n = 0;

 return l;
}

int estaVazia(Lista* l) {
 return(l->n == 0);
}


int estaCheia(Lista* l) {
 return(l->n == MAX);
}

void inserirElemento(Lista* l, int v) {
 if(!estaCheia(l)) {
  l->itens[l->n] = v;
  l->n++;
 } else {
    printf("Lista cheia!\n");
    exit(1); 
 }
}

void imprimeLista(Lista* l) {
 if(!estaVazia(l)) {
  for(int i = 0; i < l->n; i++) {
    printf("%d\n", l->itens[i]);
  }
 }
}

void removerElemento(Lista* l, int i) {
 if(!estaVazia) {
 
 } else {
     printf()	 
 }
}

int main () {

Lista* lista = criarLista();
inserirElemento(lista, 1);
inserirElemento(lista, 2);
inserirElemento(lista, 3);
imprimeLista(lista);

return 0;
}
