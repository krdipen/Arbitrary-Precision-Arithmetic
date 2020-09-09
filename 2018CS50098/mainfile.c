#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>

extern char* Addcpx();
extern char* Subcpx();
extern char* Mulcpx();
extern char* Divcpx();
extern char* Abscpx();

extern char* Addstd();
extern char* Substd();
extern char* Mulstd();
extern char* Divstd();
extern char* Absstd();

int main(int argc,char *argv[]){
    FILE *outfile;
    outfile=fopen(argv[2],"w");
    if(outfile==NULL){
       printf("File Not Found\n");
       exit(0);
    }
    FILE *outfile2;
    outfile2=fopen("data.txt","w");
    if(outfile2==NULL){
       printf("File Not Found\n");
       exit(0);
    }
    FILE *infile;
    infile=fopen(argv[1],"r");
    if(infile==NULL){
       printf("File Not Found\n");
       exit(0);
    }
    int i;
    clock_t t;
    double index=0.75;
    double time_taken;
    char str[300000];
    char map[300000];
    char cmd[5];
    while(fscanf(infile,"%s",cmd)!=EOF){
        if(strcmp(cmd,"ADD")==0){
            char arg1[300000];
            char arg2[300000];
            fscanf(infile,"%s",arg1);
            fscanf(infile,"%s",arg2);
            char arg1_copy[300000];
            char arg2_copy[300000];
            i=0;
            while(i<strlen(arg1)){
                arg1_copy[i]=arg1[i];
                i++;
            }
            arg1_copy[i]='\0';
            i=0;
            while(i<strlen(arg2)){
                arg2_copy[i]=arg2[i];
                i++;
            }
            arg2_copy[i]='\0';
            t=clock();
            char *answer=Addcpx(arg1,arg2);
            t=clock()-t;
            fprintf(outfile,"%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+0.5;
            strcat(map,"\"ADD\" ");
            snprintf(str,300000,"%f",index-0.25);
            strcat(map,str);
            strcat(map,",");
            t=clock();
            answer=Addstd(arg1_copy,arg2_copy);
            t=clock()-t;
            printf("%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+1.0;
        }
        else if(strcmp(cmd,"SUB")==0){
            char arg1[300000];
            char arg2[300000];
            fscanf(infile,"%s",arg1);
            fscanf(infile,"%s",arg2);
            char arg1_copy[300000];
            char arg2_copy[300000];
            i=0;
            while(i<strlen(arg1)){
                arg1_copy[i]=arg1[i];
                i++;
            }
            arg1_copy[i]='\0';
            i=0;
            while(i<strlen(arg2)){
                arg2_copy[i]=arg2[i];
                i++;
            }
            arg2_copy[i]='\0';
            t=clock();
            char *answer=Subcpx(arg1,arg2);
            t=clock()-t;
            fprintf(outfile,"%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+0.5;
            strcat(map,"\"SUB\" ");
            snprintf(str,300000,"%f",index-0.25);
            strcat(map,str);
            strcat(map,",");
            t=clock();
            answer=Substd(arg1_copy,arg2_copy);
            t=clock()-t;
            printf("%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+1.0;
        }
        else if(strcmp(cmd,"PROD")==0){
            char arg1[300000];
            char arg2[300000];
            fscanf(infile,"%s",arg1);
            fscanf(infile,"%s",arg2);
            char arg1_copy[300000];
            char arg2_copy[300000];
            i=0;
            while(i<strlen(arg1)){
                arg1_copy[i]=arg1[i];
                i++;
            }
            arg1_copy[i]='\0';
            i=0;
            while(i<strlen(arg2)){
                arg2_copy[i]=arg2[i];
                i++;
            }
            arg2_copy[i]='\0';
            t=clock();
            char *answer=Mulcpx(arg1,arg2);
            t=clock()-t;
            fprintf(outfile,"%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+0.5;
            strcat(map,"\"PROD\" ");
            snprintf(str,300000,"%f",index-0.25);
            strcat(map,str);
            strcat(map,",");
            t=clock();
            answer=Mulstd(arg1_copy,arg2_copy);
            t=clock()-t;
            printf("%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+1.0;
        }
        else if(strcmp(cmd,"QUOT")==0){
            char arg1[300000];
            char arg2[300000];
            fscanf(infile,"%s",arg1);
            fscanf(infile,"%s",arg2);
            char arg1_copy[300000];
            char arg2_copy[300000];
            i=0;
            while(i<strlen(arg1)){
                arg1_copy[i]=arg1[i];
                i++;
            }
            arg1_copy[i]='\0';
            i=0;
            while(i<strlen(arg2)){
                arg2_copy[i]=arg2[i];
                i++;
            }
            arg2_copy[i]='\0';
            t=clock();
            char *answer=Divcpx(arg1,arg2);
            t=clock()-t;
            fprintf(outfile,"%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+0.5;
            strcat(map,"\"QUOT\" ");
            snprintf(str,300000,"%f",index-0.25);
            strcat(map,str);
            strcat(map,",");
            t=clock();
            answer=Divstd(arg1_copy,arg2_copy);
            t=clock()-t;
            printf("%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+1.0;
        }
        else if(strcmp(cmd,"ABS")==0){
            char arg1[300000];
            fscanf(infile,"%s",arg1);
            char arg1_copy[300000];
            i=0;
            while(i<strlen(arg1)){
                arg1_copy[i]=arg1[i];
                i++;
            }
            arg1_copy[i]='\0';
            t=clock();
            char *answer=Abscpx(arg1);
            t=clock()-t;
            fprintf(outfile,"%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+0.5;
            strcat(map,"\"ABS\" ");
            snprintf(str,300000,"%f",index-0.25);
            strcat(map,str);
            strcat(map,",");
            t=clock();
            answer=Absstd(arg1_copy);
            t=clock()-t;
            printf("%s\n",answer);
            time_taken=((double)t)*1000/CLOCKS_PER_SEC;
            fprintf(outfile2,"%f %f\n",index,time_taken);
            index=index+1.0;
        }
    }
    FILE *gnuplotPipe=popen("gnuplot -persistent","w");
    fprintf(gnuplotPipe,"%s\n","set ylabel \"Time (milisecond)\"");
    fprintf(gnuplotPipe,"%s\n","set xlabel \"Complex Arithmetic\"");
    fprintf(gnuplotPipe,"%s\n","set style line 1 lc rgb 22851769");
    fprintf(gnuplotPipe,"%s\n","set style line 2 lc rgb 82490951");
    fprintf(gnuplotPipe,"set xtics (%s)\n",map);
    fprintf(gnuplotPipe,"%s\n","set boxwidth 0.5");
    fprintf(gnuplotPipe,"%s\n","set style fill solid");
    fprintf(gnuplotPipe,"%s\n","set terminal png size 1180,630");
    fprintf(gnuplotPipe,"%s \"%s\"\n","set output",argv[3]);
    fprintf(gnuplotPipe,"%s\n","plot 'data.txt' every 2 using 1:2 with boxes ls 1 title \"arbprecision\", 'data.txt' every 2::1 using 1:2 with boxes ls 2 title\"standard C library\"");
    fclose(infile);
    fclose(outfile);
    return 0;
}
