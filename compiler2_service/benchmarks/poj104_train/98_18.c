#define NUM_ITER 29358

#include <header.h>

int main_bench()
{
	int i,n;
	int count=0,flag=0;
	char word[40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word);
		if(count+strlen(word)+1<=80)
		{
			if(flag==0)
			{
				my_printf("%s",word);
				flag=1;
				count+=strlen(word);
			}
			else
			{
				my_printf(" ");
				my_printf("%s",word);
				count+=strlen(word)+1;
			}
			
		}
		else
		{
			my_printf("\n");
			my_printf("%s",word);
			count=strlen(word);
		}
	}
	return 0;
}
