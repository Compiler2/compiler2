#define NUM_ITER 164931

#include <header.h>

int main_bench()
{
	char a[100][10]={'\0'},c;
	int i,j;
	i=0;j=0;
	c='A';
	while(c!='\n')
	{
		my_scanf("%c",&c);
		if(c!=' '&&c!='\n')
		{
			a[i][j]=c;
			j=j+1;
		}
		else if(c==' ')
		{
			i=i+1;
			j=0;
		}
	}
	for(j=i;j>0;j=j-1)
	{
		my_printf("%s ",a[j]);
	}
	my_printf("%s",a[0]);
}
