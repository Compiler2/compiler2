#include <header.h>


int main_bench()
{
	int a,b,c,n,i,j,k;
	my_scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		a=i;
		for(j=2;j<=i;j++)
		{
			b=a%j;
			if(b==0) break;
			else continue;
		}
		c=i+2;
		
        for(k=2;k<=c;k++)
		{
			b=c%k;
			if(b==0) break;
			else continue;
		}
		
		if(j==a&&k==c)
		my_printf("%d %d\n",a,c);
	}
         if (n<5)
        my_printf("empty\n");

	return 0;
}