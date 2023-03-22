#include <header.h>

int main_bench()
{
    int i,a[301],n=0;
    char zf[300][100];
    for (i=0;i<300;i++){
        my_scanf("%s",&zf[i]);
        a[i]=strlen(zf[i]);
        if(a[i]==0){break;}
        n++;
    }
    for(i=0;i<n-1;i++){
         my_printf("%d,",a[i]);
    }
    my_printf("%d",a[i]);
    return 0;
}

