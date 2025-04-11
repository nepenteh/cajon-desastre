#include <stdio.h>
#include <stdlib.h>

int main() {
  int cosas = 10;
  int x;

  printf("Introduce un número x: ");
  scanf("%d",&x);
  cosas += x;
  printf("La variable cosas vale %d\n",cosas);
  return 0;
}
