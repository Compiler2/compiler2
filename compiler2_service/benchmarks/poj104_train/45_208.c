#define NUM_ITER 406139

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j;
	my_scanf("%s%s",a,b);
	i=0;j=0;
	while (a[i]!=0&&b[i]!=0)
		if (b[j]==a[i])
		{
			j++;
			i++;
		}
		else 
		{
			j++;
			i=0;
		}
	if (a[i]==0)
		my_printf("%d\n",j-i);
	else my_printf("no\n");
}


