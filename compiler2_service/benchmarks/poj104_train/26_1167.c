#define NUM_ITER 279270

#include <header.h>

int main_bench(){
    int i,t,n;
    char f[101],g[101];
    for(i=0;i<101;i++){g[i]='\0';}
    gets(f);
    n=strlen(f);
    for(i=0,t=0;i<n;i++){
        if(f[i]!=' '){g[t]=f[i];t++;}
        else{if(f[i+1]!=' '){g[t]=' ';t++;}}
    }
    my_printf("%s",g);
    return 0;
}