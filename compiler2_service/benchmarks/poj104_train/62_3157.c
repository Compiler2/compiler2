#define NUM_ITER 1501048

#include <header.h>

int main_bench(){
    char s[201],q[201];
    int i=0,j=0;
    gets(s);
    while(s[j]){
        if(s[j]!=' '||(s[j]==' '&&s[j-1]!=' '))
       {q[i]=s[j];
        i=i+1;}
        j=j+1;
    }
    q[i]='\0';
    my_printf("%s",q);
    return 0;
    
}