#define NUM_ITER 2458

#include <header.h>

int main_bench()
{
	int n,k,i,sz[1000],a=0,tmp,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&sz[i]);
	for(j=1;j<n;j++)
	{
	 for(i=0;i<n;i++)
	 {
		if(sz[i]+sz[i+1]==k)
		    a++;
	    tmp=sz[i+1];
		sz[i+1]=sz[i];
		sz[i]=tmp;

	 }
	}
	if(a!=0)
		my_printf("yes");
	else
		my_printf("no");
	



  return 0;
}