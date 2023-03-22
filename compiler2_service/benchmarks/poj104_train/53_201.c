#define NUM_ITER 10091

#include <header.h>

int main_bench()
{
int a[300],b[300];
int n,i,j,m,x;
my_scanf("%d",&n);
for(i=0;i<n;i++)
  my_scanf("%d",&a[i]);
b[0]=a[0];
j=0;
m=1;
for(i=0;i<n;i++)
 {
  if (b[j]==a[i]) ;
  else 
  {
    for(j=0;j<m;j++)
	{
		if (b[j]!=a[i]) x=1;
		else {x=0;break;}
	}
    if(x) 
	{
     b[m]=a[i];
     j=m++;
	}
  }
 } 
for (j=0;j<m-1;j++)
my_printf("%d,",b[j]);
my_printf("%d\n",b[m-1]);
}