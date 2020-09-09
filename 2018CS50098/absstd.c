#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<complex.h>

char* Absstd(char arg1[],char arg2[]){

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

    char *pointer;
    char real[300000];

    double r1=strtod(real1,&pointer);
    double i1=strtod(imaginary1,&pointer);

    double complex z1=r1+i1*I;
    double complex modsqr=conj(z1)*z1;
    double mod=sqrt(creal(modsqr));

    snprintf(real,300000,"%f",mod);

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
