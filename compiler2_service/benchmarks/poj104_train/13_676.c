#define NUM_ITER 10371

#include <header.h>

int main_bench()
{
	int n,i,j,s[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(s[j]==s[i])
				s[i]=0;
		}
		my_printf("%d",s[0]);
		for(i=1;i<n;i++)
		{
			if(s[i]!=0)
				my_printf(" %d",s[i]);
		}
		my_printf("\n");
}