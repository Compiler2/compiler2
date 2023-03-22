#define NUM_ITER 29827

#include <header.h>


int main_bench()
{
	int n,i,l,L=0;
	char word[25];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word);
		l=strlen(word);
		L+=(l+1);
		if(i==0)
			my_printf("%s",word);
		else
		{
			if(L>81)
				L=l+1;
			if(L!=(l+1))
				my_printf(" %s",word);
			else
				my_printf("\n%s",word);
		}
	}
	return 0;
}
