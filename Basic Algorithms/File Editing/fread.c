#include <stdio.h>

int main(){
    FILE *ftr = fopen("file.txt","r");
    if(ftr == NULL){
        printf("FILE NOT FOUND !!");
        return -1;
    }

    char buffer[12];
    while(fgets(buffer,12,ftr)){
        printf("%s",buffer);
    }

    fclose(ftr);
    return 0;
}

/*
    Which function should you use?
    fgetc: To read character by character.
    fgets: To read line by line (Safest for text).
    fscanf: To read formatted data (like reading a list of numbers).
*/ 