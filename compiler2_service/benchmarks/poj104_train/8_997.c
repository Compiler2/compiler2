#define NUM_ITER 2293

#include <header.h>

void paixu(int a[],int m)
{
int i,j,d;
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
d=a[i];
a[i]=a[j];
a[j]=d;
}
}
}
return;
}
void hebing(int a[],int b[],int m,int n)
{
int i;
my_printf("%d",a[0]);
for(i=1;i<m;i++)
my_printf(" %d",a[i]);
for(i=0;i<n;i++)
my_printf(" %d",b[i]);
return;
}

int main_bench()
{
int m,n,a[100],b[100],i;
my_scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
{
my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
my_scanf("%d",&b[i]);
}
paixu(a,m);
paixu(b,n);
hebing(a,b,m,n);
return 0;
}
