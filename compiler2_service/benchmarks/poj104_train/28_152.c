#define NUM_ITER 1003613

#include <header.h>


int main_bench()
{
  char a[5000];
  int c[400]={0};
  int i,n,k,t;

  gets(a);
  n=strlen(a);
 
  for(i=0,t=0;i<n;i++)
  {
    if(a[i]==' ')
	{
	    if(k==0) t++;
		k++;
	}
	else 
	{
	    if(c[t]==0) k=0;
		c[t]++;
	}
  }

  for(i=0;i<t;i++)
	  my_printf("%d,",c[i]);
  my_printf("%d",c[i]);


}