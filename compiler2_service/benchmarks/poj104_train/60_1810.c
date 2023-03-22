#define NUM_ITER 13127

#include <header.h>

main_bench()
{
	int a,i,j,k,n,b=0;
	my_scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		a=1;
		for(j=2;j<=i/2;j++)
		    if(i%j==0) {a=0;break;}
		if(a)
		  for(k=2;k<=(i+2)/2;k++)
			if((i+2)%k==0)  {a=0;break;}
		if(a==1) {my_printf("%d %d\n",i,i+2);b++;}
    }
	if(b==0)
	  my_printf("empty");
} 