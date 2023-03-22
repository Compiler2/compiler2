#include <header.h>

int main_bench()
{
	int *p,n,i,j,num=0,b[300],shu=-1;
	my_scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*(p+i)==*(p+j))
			{
				break;
			}
			else
			{
				num++;
			}
		}
		if(num==i)
		{
			shu++;
			b[shu]=*(p+i);
		}
		num=0;
	}
	for(i=0;i<shu;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d",b[shu]);
	
return 0;
}
