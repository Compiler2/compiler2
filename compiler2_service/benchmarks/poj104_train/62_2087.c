#define NUM_ITER 19983

#include <header.h>

int main_bench()
{
	char a[1002];
	int i,j;
	for(i=1;i<=1000;i++)
		a[i]=' ';
	for(i=1;i<=1000;i++)
	{
		my_scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	for(i=1;i<=1000;i++)
		if(a[i]!=' ')
		{
			my_printf("%c",a[i]);
			break;
		}
	for(j=i+1;j<=999;j++)
	{
		if((a[j]!=' '||(a[j]==' '&&a[j+1]!=' '))&&(a[i]>=32&&a[i]<=122))
			my_printf("%c",a[j]);
	}
	return 0;
}
