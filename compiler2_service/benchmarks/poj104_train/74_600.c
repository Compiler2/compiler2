#define NUM_ITER 113441

#include <header.h>

int main_bench()
{
	int m,n,i,j,k=1,a=0,number,reversed_number=0,remainder=0;
	int prime[10000]={0},reversed[10000]={0},result[10000];

	my_scanf("%d%d",&m,&n);

	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0) 
			{
				a=0;
				break;
			}
			else
			{
				a=1;
			}
		}
		if(a==1)
		{
			prime[k]=i;
			k++;
		}
	}

	for(i=1;i<=k;i++)
	{
		number=prime[i];
		reversed_number=0;
		remainder=0;

		while(number!=0)
		{
			remainder=number%10;
			reversed_number*=10;
			reversed_number+=remainder;
			number/=10;
		}

		reversed[i]=reversed_number;
		if(prime[i]==reversed[i])
		{
			result[i]=prime[i];
		}
		else
		{
			result[i]=0;
		}

	}

	a=0;
	for(i=1;i<=k;i++)
	{
		if(result[i]!=0)
		{
			my_printf("%d",result[i]);
			j=i;
            a=1;
			break;
		}
	}
    if(a==0)
	{
		my_printf("no");
	}
	else
	{
		for(i=j+1;i<=k;i++)
		{
			if(result[i]!=0)
			{
				my_printf(",%d",result[i]);
			}
		}
	}
    return 0;
}



	






