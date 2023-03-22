#define NUM_ITER 25796

#include <header.h>

int main_bench()
{
	int n,m,i,j,l;
	char a[50];
	
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%s",a);
		l=strlen(a);
		if (a[l-1]=='g') {for (j=0;j<=l-4;j++) my_printf("%c",a[j]);my_printf("\n");}
		else {for (j=0;j<=l-3;j++) my_printf("%c",a[j]);my_printf("\n");}
	}


	return 0;
}