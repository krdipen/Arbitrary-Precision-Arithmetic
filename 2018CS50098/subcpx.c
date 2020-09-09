#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"arbprecision.h"

char* Subcpx(char arg1[],char arg2[]){

    int i;
    char* real1_p;
    char* imaginary1_p;
    char real1[300000];
    char imaginary1[300000];
    real1_p=strtok(arg1,"(,)");
    i=0;
    while(i<strlen(real1_p)){
        real1[i]=real1_p[i];
        i++;
    }
    real1[i]='\0';
    imaginary1_p=strtok(NULL,"(,)");
    i=0;
    while(i<strlen(imaginary1_p)){
        imaginary1[i]=imaginary1_p[i];
        i++;
    }
    imaginary1[i]='\0';
    char* real2_p;
    char* imaginary2_p;
    char real2[300000];
    char imaginary2[300000];
    real2_p=strtok(arg2,"(,)");
    i=0;
    while(i<strlen(real2_p)){
        real2[i]=real2_p[i];
        i++;
    }
    real2[i]='\0';
    imaginary2_p=strtok(NULL,"(,)");
    i=0;
    while(i<strlen(imaginary2_p)){
        imaginary2[i]=imaginary2_p[i];
        i++;
    }
    imaginary2[i]='\0';

    char* pointer;
    char real[300000];
    char imaginary[300000];

    pointer=Sub(real1,real2);
    i=0;
    while(i<strlen(pointer)){
        real[i]=pointer[i];
        i++;
    }
    real[i]='\0';

    pointer=Sub(imaginary1,imaginary2);
    i=0;
    while(i<strlen(pointer)){
        imaginary[i]=pointer[i];
        i++;
    }
    imaginary[i]='\0';

    static char answer[300000];
    i=0;
    answer[i]='(';
    i++;
    for(int j=0;j<strlen(real);j++){
        answer[i]=real[j];
        i++;
    }
    answer[i]=',';
    i++;
    for(int j=0;j<strlen(imaginary);j++){
        answer[i]=imaginary[j];
        i++;
    }
    answer[i]=')';
    i++;
    answer[i]='\0';
    return answer;

}
