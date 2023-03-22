#include <header.h>

int main_bench()
{
    int n,i,m,count=0,k=0;
	char c[40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",c);
        m=strlen(c);
		
		count=count+m+1;
		if(count-1>80)
		{
			my_printf("\n%s",c);
			count=m+1;
			
		}
		else
		{
			if(k==0)
			{
              my_printf("%s",c);
			  k=1;
			}
			else
			my_printf(" %s",c);
		}
	}
	return 0;
}