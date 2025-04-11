#include <stdio.h>
#include <stdlib.h>

int main() {
  int cosas = 10;
  int x;

  printf("Introduce un número: ");
  scanf("%d",&x);
  cosas += x;
  printf("Cosas vale %d\n",cosas);
  return 0;
}
