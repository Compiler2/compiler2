#define NUM_ITER 9992

#include <header.h>

int main_bench()
{
    int n,a[300],*p[300],i,j,k,m;
	my_scanf("%d",&n);
	p[0]=a;
	for(i=0;i<=n-1;i++)
	{my_scanf("%d",p[0]+i);}
    for(i=1,j=1;i<=n-1;i++)
	{
      for(k=0;k<=j-1;k++)
	  {if(a[i]==*p[k])
	  {m=0;break;}
	  else
	  m=1;}
	  if (m)
	  {p[j]=p[0]+i;j++;}
	}
	for(i=0;i<=j-2;i++)
	{my_printf("%d,",*p[i]);}
	my_printf("%d",*p[j-1]);
}