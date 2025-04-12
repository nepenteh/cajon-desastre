#include <stdio.h>
#include <stdlib.h>

void presentacion() {
  printf("Programa principal");
}

int main() {
  int cosas = 10;
  int x;

  presentacion();
  printf("Introduce un número x: ");
  scanf("%d",&x);
  cosas += x; // comentario añadido en local
  printf("La variable cosas vale %d\n",cosas);
  return 0;
}
