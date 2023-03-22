#define NUM_ITER 1357924

#include <header.h>

int main_bench(){
    int i,n,j,q=0;
    char a[101];
    gets(a);
    n=strlen(a);
    for(i=0;i<n-1;i++){
        if(a[i]==' '&&a[i+1]==' '){
            while(a[i+1]==' '){
           for(j=i;j<n-1;j++){
           a[j]=a[j+1];
           }
           q++;
            }
        }
    }
    a[n-q]='\0';
    my_printf("%s",a);
    return 0;
}
