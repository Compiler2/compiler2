#define NUM_ITER 1260257

#include <header.h>

int main_bench()
{
    int i,j,m,k=0;
    char a[1000];
    gets(a);
    m=(int)strlen(a);
    a[m]=' ';
    for(i=0;i<=m;i++){
        if(a[i]!=' '){
            k=k+1;
        }else if(a[i]==' '&&a[i-1]!=' '&&i<m){
            my_printf("%d,",k);
            k=0;
        }else if(i==m){my_printf("%d",k);
        break;
        }
        else{continue;}
     }
    return 0;
}

