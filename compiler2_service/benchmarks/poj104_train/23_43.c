#define NUM_ITER 292645

#include <header.h>

int main_bench()
{
	char a[50][20];
	int i=0,j=0,k=0,m=0,d;
	int b[50];
	char c;
	for(c=getchar();c!='\n';c=getchar()) 
	{
		if (c!=' ')
		{
			a[i][j]=c;
			j++;
			d=j;
		}
		else
		{
			i++;
			m=i;
			b[k]=j;
			k++;
			j=0;
		}
	}
	b[k]=j;  
	for (;m>0;m--)  
	{
		for (j=0;j<b[m]-1;j++)
			my_printf("%c",a[m][j]);
		my_printf("%c ",a[m][b[m]-1]);
	}
	for (j=0;j<b[0];j++)  
			my_printf("%c",a[0][j]);
	return 0;
}