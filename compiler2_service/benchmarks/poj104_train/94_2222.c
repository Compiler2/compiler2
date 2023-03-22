#define NUM_ITER 17238

#include <header.h>

int main_bench()
{
	int k,i,num[500],s=0,num1[500],j,ex,t;
	my_scanf("%d",&k);
	for(i=0;i<k;i++)
		my_scanf("%d",&num[i]);
	for(i=0;i<k;i++)
	{
		if(num[i]%2==1)
		{
			num1[s]=num[i];
			s++;
		}
	}
	for(i=1;i<s;i++)
		for(j=0;j<s-i;j++)
		{
			if(num1[j]>num1[j+1])
			{
				ex=num1[j];
				num1[j]=num1[j+1];
				num1[j+1]=ex;
			}
		}
	for(t=0;t<s;t++)
	{
		if(t!=0)
			my_printf(",");
		my_printf("%d",num1[t]);
	}
	return 0;
}