#define NUM_ITER 9866

#include <header.h>

int main_bench()
{
	int a[300]={0},n,num,count=0,i,j;
	my_scanf("%d",&n);
	num=n;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[count]);
		for(j=0;j<count;j++)
		{
			if(a[j]==a[count])
			{
				num--;
				break;
			}
		}
		if(j==count)
		{
			count++;
		}
	}
	for(i=0;i<num-1;i++)
		my_printf("%d,",a[i]);
	my_printf("%d\n",a[num-1]);


	return 0;
}

 
