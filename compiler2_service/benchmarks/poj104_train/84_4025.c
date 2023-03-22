#define NUM_ITER 30255

#include <header.h>

int main_bench()
{
	int len,e;
	my_scanf("%d",&len);
	int num[100];
	my_scanf("%d\n",&num[0]);
	for(int k=1;k<=2;k++)
	{
		for(int i=0;i<len-k;i++)
		{
			my_scanf("%d",&num[i+1]);
			if(num[i]>num[i+1])
			{
				e=num[i+1];
				num[i+1]=num[i];
				num[i]=e;
			}
		}
	}
	my_printf("%d\n%d\n",num[len-1],num[len-2]);
	return 0; 
}