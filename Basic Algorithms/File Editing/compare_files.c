// WAP to check wheteher contents of the two are same by comparing them on a byte-by-byte basis.
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch1, ch2;

    FILE *fp, *fq;
    char fname1[67], fname2[67];

    printf("Enter File 1 Name : ");
    gets(fname1);
    
    printf("Enter File 2 Name : ");
    gets(fname2);

    fp = fopen(fname1, "rb");
    if(fp == NULL){
        printf("Unable to open file 1\n");
        exit(1);
    }
    fq = fopen(fname2, "rb");
    if(fq == NULL){
        printf("Unable to open file2\n");
        exit(1);
    }

    while(1){
        ch1 = getc(fp);
        ch2 = getc(fq);

        if(ch1 == EOF && ch2 == EOF){
            printf("File contents match");
            break;
        }

        if(ch1 != ch2 || ch1 == EOF && ch2 != EOF || ch1 != EOF && ch2 == EOF){
            printf("File contents do not match");
            break;
        }
    }

    fclose(fp);
    fclose(fq);
    return 0;
}