#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");

  srand(time(0));
  int r = rand();

  printf("%d\n", r);
  return 0;
  
}