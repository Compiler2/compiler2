#define NUM_ITER 1365977

#include <header.h>

int main_bench(){
    int i,j,n,s,e;
    char a[300];
    gets(a);
    n=strlen(a);
    for (s=0;s<n;s++){
        if (a[s]==' '&&a[s+1]==' '){ 
            for (e=s+1;e<n;e++){
                if (a[e]!=' '){
                    break;
                }
            }
            for (i=s+1;i<e;i++){
                a[i]=0;
            }
            s=e;  
        }
    }
    for (i=0;i<n;i++){
        if (a[i]!=0){
            my_printf("%c",a[i]);
        }
    }
}

