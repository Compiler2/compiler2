#include <header.h>

int main_bench()
{
	int str[301];
	char a[500]={0};
	int n,i,dd=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&str[i]);
	for(i=0;i<n;i++)
	{
		if(a[str[i]]==0)
		{
			if(dd==1)
			my_printf(",");
			dd=1;
			my_printf("%d",str[i]);
			a[str[i]]=1;
		}
	}
	my_printf("\n");
	return 0;
}