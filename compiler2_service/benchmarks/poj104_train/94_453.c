#define NUM_ITER 16883

#include <header.h>

int main_bench()
{
	int n[500],m[500];
	int number,i,k,e,p;
	my_scanf("%d",&number);
	i=0;
	k=0;
	while(i<number)
	{
		my_scanf("%d",&n[i]);
		if(n[i]%2==1)
		{
			m[k]=n[i];
			k++;
		}
		i++;
	}
	for(i=1;i<=k;i++)
	{
		for(p=0;p<k-i;p++)
		{
			if(m[p]>m[p+1])
			{
				e=m[p+1];
				m[p+1]=m[p];
				m[p]=e;
			}
		}
	}
	for(i=1;i<=k;i++)
	{		
		if(i==1)
		{
			my_printf("%d",m[i-1]);
		}else
		{
			my_printf(",%d",m[i-1]);
		}
	}
	return 0;
}