#include<stdio.h>
#include<ctype.h>
File *f;
char t;
int n;
void next(){
    t=fgetc(f);
    if(isdigit(t)){
        ungetc(t,f);
        fscanf(f,"%d",&num);
        tok=n;
    }
}
void init(char *s){
    f=fopen(s,"r");
    next;
}