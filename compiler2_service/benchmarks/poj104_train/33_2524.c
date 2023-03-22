#define NUM_ITER 27502

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	char a[1000][256];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a[i]);
		for(int j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='A')
			{
				my_printf("T");
			}
			if(a[i][j]=='T')
			{
				my_printf("A");
			}
			if(a[i][j]=='G')
			{
				my_printf("C");
			}
			if(a[i][j]=='C')
			{
				my_printf("G");
			}
		}
		my_printf("\n");
	}
	return 0;
}