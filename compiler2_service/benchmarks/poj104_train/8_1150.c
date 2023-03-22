#define NUM_ITER 3075

#include <header.h>

int main_bench()
{
    int m,n,t;
    my_scanf("%d%d",&m,&n);
    my_printf("\n");
    int a[m],b[n],i,j;
    for(i=0;i<m;i++) my_scanf("%d",&a[i]);
    my_printf("\n");
    for(i=0;i<n;i++) my_scanf("%d",&b[i]);
    for(i=1;i<m;i++)
        for(j=0;j<m-i;j++)
            if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
            if(b[j]>b[j+1]) {t=b[j];b[j]=b[j+1];b[j+1]=t;}
    my_printf("%d",a[0]);
    for(i=1;i<m;i++) my_printf(" %d",a[i]);
    for(i=0;i<n;i++) my_printf(" %d",b[i]);
}