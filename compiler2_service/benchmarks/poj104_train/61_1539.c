#define NUM_ITER 5807

#include <header.h>

int F(int n);
int main_bench()
{
	int n,m[999],j=0;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%d",&m[j]);
	}
	j=0;
	for(j=0;j<n;j++)
	{
		my_printf("%d\n",F(m[j]));
	}
	return 0;
}



  int F(int n)
  {
	  int k[999];
	  int i=1;
	  k[1]=1;
	  k[2]=1;
	  
	  if(n==1)
		  return 1;
	  if(n==2)
		  return 1;
	  else
		  for(i=3;i<=n;i++)
		  {
			  k[i]=k[i-1]+k[i-2];
		  }
		  return k[n];
  }
