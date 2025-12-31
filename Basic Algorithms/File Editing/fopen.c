#include <stdio.h>

int main(){
    FILE *ftr = fopen("file.txt","w");

    fprintf(ftr,"Hello, World\n I am Mohan! -\t I am trying to learn C programming!");

    fclose(ftr);
}