#define NUM_ITER 52832

#include <header.h>

int main_bench()
{
	int n,k,i,szone[999],sztwo[999],a;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&szone[i]);
		sztwo[i]=szone[i];
	}
    for(i=0;i<n;i++)
	{
       for(a=0;a<n;a++)
	   {
		   if(szone[i]+sztwo[a]==k)
		      break;
	   }
       if(szone[i]+sztwo[a]==k)
	   {
		   my_printf("yes");
		   break;
	   }
	   else
	   {
		   if(i!=n-1)
			   continue;
		   else
			my_printf("no");
	   }
	}
	return 0;
}

