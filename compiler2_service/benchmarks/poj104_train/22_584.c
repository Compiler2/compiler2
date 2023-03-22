#define NUM_ITER 1828373

#include <header.h>


int main_bench()
{
    int a[300],i=1,j,k,t,n=0;
    char c;
    my_scanf("%d",&a[0]);
    c=getchar();
    while(c==',')
    {
    my_scanf("%d",&a[i]);
    i++;
    c=getchar();
    }

    for(j=0;j<i-1;j++)
    {
        for(k=0;k<i-1-j;k++)
        if(a[k]<a[k+1])
        {t=a[k];
        a[k]=a[k+1];
        a[k+1]=t;
        }
    }

    for(j=0;j<i;j++)
    {
    if(a[j]<a[0]) n=1;
    if(n==1) break;
    }

   if(n==1) my_printf("%d",a[j]);
   else my_printf("No");

    return 0;
}