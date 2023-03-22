#define NUM_ITER 54403

#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[256];
	my_scanf("%d",&n);
	my_scanf("%c",&a[0]);
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<=255)
		{
			my_scanf("%c",&a[j]);
			if(a[j]=='A') my_printf("T");
			else if(a[j]=='T') my_printf("A");
			else if(a[j]=='C') my_printf("G");
			else if(a[j]=='G') my_printf("C");
			else break;
			j=j+1;
		}
		my_printf("\n");
	}
	return 0;
}