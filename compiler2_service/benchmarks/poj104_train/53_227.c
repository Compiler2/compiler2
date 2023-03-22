#include <header.h>

int main_bench()
{
	int n,i,s[100]={0},j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);
	my_printf("%d",s[0]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)if(s[i]==s[j])break;
		if(j==i)my_printf(",%d",s[i]);
	}
	my_printf("\n");
}
