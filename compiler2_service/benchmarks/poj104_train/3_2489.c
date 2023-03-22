#include <header.h>

  int  main_bench( )
  {
    int n,k,i,r,a[1000],x=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i=i+1)
	{
		my_scanf("%d",&a[i]);
	}
	for (r=0;r<=n-2;r=r+1)
	{
		for(i=r+1;i<=n-1;i=i+1)
		{
			if((a[r]+a[i])==k)
			{
				x=x+1;	
			}
		}
	}
	if(x==0)
		my_printf("no");
	else if(x!=0)
	    my_printf("yes");
	return 0;
  }