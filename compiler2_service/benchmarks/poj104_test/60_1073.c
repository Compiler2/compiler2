#define NUM_ITER 10045

#include <header.h>



int main_bench()
{	int flag,count,n,i,j,k[100000],flagg;

	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	k[i]=0;

	i=2;count=0;flag=0;
	while(i<=n)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			if(i%j!=0)
				flag=0;
		}
		if(0==flag)
		{
			k[count]=i;
			count++;
		}
		i++;
	}
	flagg=0;
	for(i=0;i<=count;i++)
	{
		if(k[i]==k[i+1]-2)
		{
			my_printf("%d %d\n",k[i],k[i+1]);
			flagg=1;
		}	
	}
	if(flagg==0)
			my_printf("empty\n");
	return 0;
}

