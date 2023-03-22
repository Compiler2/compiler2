#define NUM_ITER 10959

#include <header.h>

int bijiao(const void *x,const void *y)
{return *(int*)x-*(int*)y; 
}
main_bench()
{int n,m,i,a[100],b[100];
my_scanf("%d %d",&n,&m);
for(i=0;i<=n-1;i++)
my_scanf("%d",&a[i]);
for(i=0;i<=m-1;i++)
my_scanf("%d",&b[i]);
qsort(a,n,sizeof(a[0]),bijiao);
qsort(b,m,sizeof(b[0]),bijiao);
for(i=0;i<=n-1;i++)
my_printf("%d ",a[i]);
for(i=0;i<m-1;i++)
my_printf("%d ",b[i]);
my_printf("%d",b[m-1]);
}