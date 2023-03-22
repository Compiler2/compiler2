#define NUM_ITER 2300

#include <header.h>

int main_bench()
{
	int n,i,count1=0,count2=0,num=0,j;
	my_scanf("%d",&n);
	for(i=3;i<=n-2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				count1++;
		}
		for(j=2;j<i+2;j++)
		{
			if((i+2)%j==0)
				count2++;
		}
		if(count1==0&&count2==0)
		{
		my_printf("%d %d\n",i,(i+2));
		num=num+1;
		}
		count1=0;
		count2=0;
	}
	if(num==0)
		my_printf("empty");
	return 0;
}