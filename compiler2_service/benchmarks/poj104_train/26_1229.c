#include <header.h>

int main_bench(){
    int i,j,k=0,p;
char zf[101],jg[101];
gets(zf);
for(i=0;zf[i]!='\0';i++){
    if(zf[i]==' '){
    jg[k]=' ';
    k++;
    j=i+1;
    while(zf[j]==' '){j++;}
    i=j;}
    jg[k]=zf[i];
    k++;    
}jg[k]='\0';
my_printf("%s",jg);
return 0;}
