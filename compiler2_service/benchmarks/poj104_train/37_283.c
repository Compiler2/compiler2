#define NUM_ITER 428

#include <header.h>

int main_bench()
{
	int num,i,j,k,m,flag,already;
	char a[100000];
	my_scanf("%d",&num);
	getchar();
	for(i=1;i<=num;i++)
	{
		for(j=0;j<99999;j++)
		{
			my_scanf("%c",&a[j]);
			if(a[j]=='\n') break;
		}
		for(k=0;k<j;k++)
		{
			flag=1;
			already=0;
			for(m=0;m<j;m++)
			{
				if(a[m]==a[k] && m!=k)
				{
					flag*=0;
					break;
				}
			}
			if(flag==1)
			{
				my_printf("%c\n",a[k]);
				already=1;
				break;
			}
		}
		if(already==0)
				my_printf("no\n");
	}
	return 0;
}