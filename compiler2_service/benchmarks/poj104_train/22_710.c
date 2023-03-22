#define NUM_ITER 1433841

#include <header.h>


int main_bench()
{
	int a[300];
	char c;
	int i,n,max,ma;
	my_scanf("%d",&a[0]);
	my_scanf("%c",&c);
	i=1;
	while(c==',')
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&c);
		i++;
	}
	n=i;
	i=1;
	max=a[0];
	if(n==1) my_printf("No");
	else
	{
	
		while(i<n)
	    {
		
			if(max<a[i]) max=a[i];
		    i++;
	    }
	    if(max==a[0]) ma=0;
		else ma=a[0];
	    i=0;
	    while(i<n)
	    {
		
			if((ma<a[i])&&(a[i]!=max)) ma=a[i];
		    i++;
	    }
	    if((max==ma)||(ma==0)) my_printf("No");
	    else my_printf("%d",ma);
	}

	return 0;
}