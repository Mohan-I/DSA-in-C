#include <stdio.h>
#include <time.h>

int main() {
  time_t currentTime;
  time(&currentTime); // Get the current time

  printf("Current time: %s", ctime(&currentTime));
  return 0;
}

// Note: This example displays the server's local time, which may differ from your local time.