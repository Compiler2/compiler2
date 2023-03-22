#define NUM_ITER 49962

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int sz[100],i;
	for(i=0;i<n;i++)
    {
      my_scanf("%d",&sz[i]);
	}
    for(i=0;i<n-1;i++)
    {
      int e;
      if(i<n/2)
      {
        e=sz[i];
        sz[i]=sz[n-i-1];
        sz[n-i-1]=e;
	  }
      my_printf("%d ",sz[i]);
    }
my_printf("%d",sz[n-1]);    
return 0;
}                                                                                                                                                                                                                                                                                      
    