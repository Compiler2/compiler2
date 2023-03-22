#include <header.h>

int main_bench()
{int n,a[300],*p,i,j,k;
my_scanf("%d",&n);
p=a;
for(;p<a+n;p++)
my_scanf("%d",p);
p=a;
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(*(p+i)==*(p+j))
{for(k=j+1;k<n;k++)
*(p+k-1)=*(p+k);
n=n-1;
j=j-1;}
}}
my_printf("%d",*p);
for(i=1;i<n;i++)
my_printf(",%d",*(p+i));

return 0;
}