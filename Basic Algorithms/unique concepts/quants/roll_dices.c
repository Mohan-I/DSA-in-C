#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  printf("You rolled %d and %d (total = %d)\n", dice1, dice2, dice1 + dice2);

  return 0;
}