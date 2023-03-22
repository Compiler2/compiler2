#define NUM_ITER 183603

#include <header.h>

int main_bench()
{
	int i,j,t,p,a[6][6],max;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		p=0;
		max=a[i][0];
		t=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				t=j;
			}
		}
        for(j=0;j<5;j++)
		{
			if(max<=a[j][t])
			{
				p++;
			}
		}
		if(p==5)
		{
			my_printf("%d %d %d",i+1,t+1,max);
			my_printf("\n");
			break;
		}
	}
	if(i>=5)
		my_printf("not found");
	return 0;
}
	