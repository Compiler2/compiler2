#define NUM_ITER 36739

#include <header.h>

int main_bench()

{
  int i,j,n,k,a[100],shousuo,shuzhang;
  my_scanf("%d\n",&n);
  j=0;
  k=0;
  for(i=0;i<n;i++) a[i]=0;
  for(i=1;i<=n;i++)
  {
		my_scanf("%d%d",&shousuo,&shuzhang);
		if(90<=shousuo&&shousuo<=140)
		{
		   if(60<=shuzhang&&shuzhang<=90)
				a[j]=a[j]+1;
		   else
		   	   j=j+1;
		   

		}
		
		else
		j=j+1;
		
  }
  for(i=0;i<n;i++)
  {
    if(k<a[i]) k=a[i];
  }
  my_printf("%d\n",k);
}