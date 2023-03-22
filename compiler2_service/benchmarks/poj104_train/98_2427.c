#include <header.h>

int main_bench()
{
	int n,i;
	int count=0;
	char word[40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word);
		if (count==0)
			my_printf("%s",word);
		int j=0;
		while (word[j]!='\0')
		{
			j++;
		}
		count=count+j;
		if(count>j)
		{
		if(count<79)
		{
			count++;
			my_printf(" %s",word);
		}
		else if(count==79)
		{
			my_printf(" %s\n",word);
			count=0;
		}
		if(count>79)
		{
			my_printf("\n%s",word);
			count=j;
		}
		}
	}
	return 0;
}