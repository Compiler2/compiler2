#define NUM_ITER 1222709

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j,flag;
	my_scanf("%s %s",&a,&b);
	for(i=0;b[i]!=0;i++)
	{
		if (b[i]==a[0])
		{
			flag=0;
			for(j=0;a[j]!=0&&b[j]!=0;j++)
			{
				if (a[j]!=b[i+j])
				{
					flag=1;
					break;
				}
			}
			if(!flag) 
			{
				my_printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}