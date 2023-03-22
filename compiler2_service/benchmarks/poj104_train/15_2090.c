#include <header.h>

int main_bench()
{
	int n,h,l,s,i,j,p,sum,m;
	my_scanf("%d",&n);
	sum=0;
	j=0;
	for(h=1;h<=n;h++)
	{
		i=0;
		for(l=1;l<=n;l++)
		{			
			my_scanf("%d",&s);  
			if(s==0)
				i++;
		}
		sum=sum+i;
        if(i!=0)
			j++;
	}
	if(j<=2||sum<=2*j)
		my_printf("0");
	else
	{
		p=(sum-2*j)/2;
		m=p*(j-2);
		my_printf("%d",m);
	}
	return 0;
}

 