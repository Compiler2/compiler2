#include <header.h>

int main_bench()
{
    int m[500],n,i=0,j;
    for(my_scanf("%d",&n);i<n;i++)my_scanf("%d",&m[i]);
    my_printf("%d",m[0]);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++)
            if(m[i]==m[j]){m[i]=0;break;}
        if(m[i])my_printf(",%d",m[i]);
    }
    return 0;
}