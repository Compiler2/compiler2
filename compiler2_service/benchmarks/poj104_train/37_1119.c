#define NUM_ITER 23602

#include <header.h>

int main_bench()
{
	
	char a[10000]={0};
	int i,j,k, n,lenth,num=-1;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		lenth=strlen(a);
		for(j=0;j<lenth;j++)
			for(k=0;k<lenth;k++)
			{
				num=-1;
				if(j!=k&&a[j]==a[k])
					break;
				else if(j!=k&&k==lenth-1&&a[j]!=a[k])
				{
					num=j;
					j=lenth;
					break;
				}
				else if(j==lenth-1&&j!=k&&a[j]==a[k])
				{
					my_printf("no");
					break;
				}
				else if(j==lenth-1&&k==lenth-1)
				{
					num=lenth-1;
				}
			}
			if(num!=-1)
				my_printf("%c\n",a[num]);
			else
				my_printf("no\n");
			
			
			
	}
	return 0;
}