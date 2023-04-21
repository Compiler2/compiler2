#define NUM_ITER 30296

#include <header.h>


int main_bench()
{
	struct
	{
		char word[41];
		int lw;
	}a[10000];
	int lpr=0;
	
	int n,m,i,j,k=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",a[i].word);
		a[i].lw=strlen(a[i].word);
	}
	my_printf("%s",a[0].word);
	lpr=a[0].lw;
	for (i=1;i<n;i++)
	{
			lpr+=a[i].lw;
			if (lpr<80)
			{
				my_printf(" %s",a[i].word);
				lpr++;
			}
			else
			{
				my_printf("\n");
				my_printf("%s",a[i].word);
				lpr=a[i].lw;
			}
	}
	my_printf("\n");
	return 0;
}
