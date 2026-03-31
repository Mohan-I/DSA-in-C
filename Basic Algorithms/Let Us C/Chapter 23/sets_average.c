// WAP that recieves a set of numbers as command-line arguments and prints their average.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argc[]){
    int sum, i, avg;
    sum = 0;

    for(i = 1; i < argc; i++)
        sum = sum + atoi (argv[i]);

    avg = sum / (argc - 1);
    printf("Average = %d", avg);

    return 0;
}