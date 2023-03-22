#include <header.h>

int main_bench()
{
int n,m,i,k,l,j=0,*p;
int a[100000];
my_scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
my_scanf("%d",p++);
p=a;
my_scanf("%d",&m);
for(i=0;i<n-j;i++)
{
if(*(p+i)==m)
{
j++;
{for(l=i;l<n;l++)
*(p+l)=*(p+l+1);}

i--;
}
}
for(i=0;i<n-j-1;i++)
{my_printf("%d ",*p);p++;}
p=a;
my_printf("%d",*(p+n-j-1));
}