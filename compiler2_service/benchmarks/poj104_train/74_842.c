#define NUM_ITER 1211365

#include <header.h>

int main_bench()
{
	int n,m,i,j,k=0,flag,a,b,s;
	my_scanf("%d%d",&n,&m);
	i=n;
	while(i<=m)
	{
		a=i;s=0;
		while(a>0)
		{  
			b=a%10;
		    s=s*10+b;
            a=a/10;
		}
		if(s==i)
		{ 
			j=2;flag=0;
			while(j<=i/2)
			{
				if(i%j==0)
					flag=1;
				j++;
			}
			if(flag==0)
			{
				k++;
				if(k==1)
					my_printf("%d",i);
				if(k>1)
					my_printf(",%d",i);
			}
		}
		i++;
	}

	if(k==0)
		my_printf("no");
}



