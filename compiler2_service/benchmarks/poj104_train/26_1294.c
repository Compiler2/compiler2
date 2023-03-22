#define NUM_ITER 1382949

#include <header.h>

int main_bench(){
    int i,k;
    char a[200];
    gets(a);
    for(i=0;a[i]!='\0';i++){
        while(a[i]==' '&&a[i+1]==' '){
            for(k=i;a[k]!='\0';k++){
                a[k]=a[k+1];
            }
        }
    }
    for(i=0;a[i]!='\0';i++){
        my_printf("%c",a[i]);
    }
    return 0;
}


