#include <header.h>

int main_bench(){
    char sz[100];
    int i,n,x;
   gets(sz);
n=strlen(sz);
for(i=0;i<n-1;i++){
    if(sz[i]==' '){
        if(sz[i+1]==' '){
            continue;
        }
        else{
            my_printf(" ");
        }
    }
    else{
        my_printf("%c",sz[i]);
    }
}
my_printf("%c",sz[n-1]);
return 0;
}

