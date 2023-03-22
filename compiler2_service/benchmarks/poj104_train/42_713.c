#define NUM_ITER 46544

#include <header.h>

int main_bench()
{int a[100000],n,m,j,i,*p;
my_scanf("%d",&n);
p=a;
for (i=0;i<n;i++)
my_scanf("%d",p++);
my_scanf("%d",&m);
p=a;

for(i=0;i<n;i++)
{if (*(p+i)==m)
{for(j=i;j<n;j++)
*(p+j)=*(p+j+1);
i=i-1;n=n-1; }}
p=a;

for(i=0;i<n-1;i++,p++)
my_printf("%d ",*p);
my_printf("%d",*p);
      } 
      

      
