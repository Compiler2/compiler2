#define NUM_ITER 31461

#include <header.h>

int main_bench()
{
	int n,i,m=0;
	char word[41];
	my_scanf("%d",&n);
	my_scanf("%s",word);
	for(i=0;i<n;i++)
	{
		if(m==0)
		{
			my_printf("%s",word);
			m=m+strlen(word);
			my_scanf("%s",word);
		}
		else
		{
			if(m+strlen(word)+1>80)
			{
				my_printf("\n");
				m=0;
				i--;
			}
			else
			{
				my_printf(" %s",word);
				m=m+strlen(word)+1;
				my_scanf("%s",word);
			}
		}
	}
	return 0;
}

