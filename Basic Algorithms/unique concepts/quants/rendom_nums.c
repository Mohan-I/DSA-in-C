#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  int x = rand() % 10;  // 0..9
  printf("%d\n", x);
  return 0;
}