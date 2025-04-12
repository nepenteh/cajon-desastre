#include <stdio.h>
#include <stdlib.h>

void copyright() {
  printf("Copyright (C) 2025\n");
  printf("Xerez-Icovesanos.\n");
}

int main() {
  int cosas = 10;
  int x;

  printf("Introduce un número x: ");
  scanf("%d",&x);
  cosas += x; // comentario añadido en local
  printf("La variable cosas vale %d\n",cosas);
  copyright();
  return 0;
}
