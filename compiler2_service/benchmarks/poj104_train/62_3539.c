#define NUM_ITER 309599

#include <header.h>

int main_bench(){
    char a[201];
    char b[201];
    int c=0;
    gets(a);
    for(int i=0;i<201;i++){
        b[i]='\0';
    }
    for(int i=0;i<strlen(a);i++){
        if((a[i]==' ')&&(a[i+1]==' ')){
            b[c]=' ';
        }else{
        b[c]=a[i];
        c++;
        
        }
    }
    my_printf("%s",b);
    return 0;
}


