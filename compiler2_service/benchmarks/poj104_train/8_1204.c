#include <header.h>

int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
void Do(int m,int n)
{
    int a[m],b[n];
    int i;
    for(i=0;i<m;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    my_scanf("%d",&b[i]);
    qsort(a,m,4,compare);
    qsort(b,n,4,compare);
    for(i=0;i<m;i++)
    my_printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    my_printf("%d ",b[i]);
    my_printf("%d\n",b[n-1]);
}
main_bench()
{
    int m,n;
    my_scanf("%d %d",&m,&n);
    Do(m,n);
}
