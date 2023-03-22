#include <header.h>

int main_bench()
{
    int m,i,j,n;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i+=2)
	{
		for(j=3;j*j<=i;j+=2)
			if(i%j==0)
				break;
		if(j*j<=i) 
			continue;
		n=m-i;
		for(j=3;j*j<=n;j+=2)
			if(n%j==0)
				break;
		if(j*j>n)
			my_printf("%d %d\n",i,m-i);

	}
					
    return 0;
}

