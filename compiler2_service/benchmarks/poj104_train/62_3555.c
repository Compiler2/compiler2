#define NUM_ITER 30632

#include <header.h>

int main_bench(){
    char a[300];
    gets(a);
    for(int k=200;k>0;k--){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){if(a[i+1]==' '){
            for(int j=i+1;j<strlen(a)-1;j++)
            {a[j]=a[j+1];}
            a[strlen(a)-1]='\0';}
    
    }}}
    my_printf("%s",a);
return 0;}