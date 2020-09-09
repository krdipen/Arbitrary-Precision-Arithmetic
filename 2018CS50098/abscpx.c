#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"arbprecision.h"

char* Abscpx(char arg1[]){

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

    char* pointer;
    char real1real1[300000];
    char imaginary1imaginary1[300000];
    char modsqr[300000];
    char real[300000];

    pointer=Mul(real1,real1);
    i=0;
    while(i<strlen(pointer)){
        real1real1[i]=pointer[i];
        i++;
    }
    real1real1[i]='\0';

    pointer=Mul(imaginary1,imaginary1);
    i=0;
    while(i<strlen(pointer)){
        imaginary1imaginary1[i]=pointer[i];
        i++;
    }
    imaginary1imaginary1[i]='\0';

    pointer=Add(real1real1,imaginary1imaginary1);
    i=0;
    while(i<strlen(pointer)){
        modsqr[i]=pointer[i];
        i++;
    }
    modsqr[i]='\0';

    pointer=Sqrt(modsqr);
    i=0;
    while(i<strlen(pointer)){
        real[i]=pointer[i];
        i++;
    }
    real[i]='\0';

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
    answer[i]='0';
    i++;
    answer[i]=')';
    i++;
    answer[i]='\0';
    return answer;

}
