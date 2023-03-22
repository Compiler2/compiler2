#include <header.h>

int main_bench()
{
	int a[5][5],i,j,count=1,p,max;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{ 
		max=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>a[i][max])
				max=j;
		}
		for(p=0;p<5;p++)
		{
			if(p==i)
				continue;
			if(a[i][max]>a[p][max])
				break;
		}
		if(p==5)
		{
			my_printf("%d %d %d\n",i+1,max+1,a[i][max]);
			count++;
		}
	}
	if(count==1)
		my_printf("not found\n");
	return 0;
}