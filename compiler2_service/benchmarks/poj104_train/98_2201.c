#include <header.h>

int main_bench()
{
	int i,n,sum=0,m;
	char word[40];
	my_scanf("%d",&n);
	my_printf("\n");
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",word);
		m=strlen(word)+1;
		sum=sum+m;
		if((sum>81)||(i==1))
		{
			my_printf("\n");
			sum=m;
			my_printf("%s",word);
		}
		else
		    my_printf(" %s",word);
	}
	my_printf("\n");
}