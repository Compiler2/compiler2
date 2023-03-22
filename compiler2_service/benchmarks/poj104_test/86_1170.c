#include <header.h>

int main_bench()
{
	int time,i,n,broken,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&broken);
		if(broken==0)
		{
			my_printf("60\n");
		}
		else
		{
		int *num=(int*)malloc(sizeof(int)*broken);
		for(j=0;j<broken;j++)
		{
			my_scanf("%d",&num[j]);
		}
		for(j=broken-1;j>=0;j--)
		{
			time=num[j]+(j+1)*3;
			if(time<60)
			{
				my_printf("%d\n",60-(j+1)*3);
				break;
			}
			else if(time<63)
			{
				my_printf("%d\n",num[j]);
				break;
			}
		}
		free(num);
		}
	}
	return 0;
}
