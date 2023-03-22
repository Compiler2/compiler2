#include <header.h>

int main_bench()
{
	int n;
	int flag=0;
	int i,j;
	struct number
	{
		int size;
		int mark;
	}num[300];
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
		my_scanf("%d",&num[i].size);

	for(i=0;i<n;i++)
		num[i].mark=1;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[j].size==num[i].size)
				num[j].mark=0;
		}
	}
	
	for(i=0;i<n;i++)
	{
	
		if(num[i].mark==1)
		{
			if(flag==1)
				my_printf(",");
			flag=1;
			my_printf("%d",num[i].size);
		}
	}

my_printf("\n");
}