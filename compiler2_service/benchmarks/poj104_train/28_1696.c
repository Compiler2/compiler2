#define NUM_ITER 1039871

#include <header.h>

int main_bench()
{
	int n=0,i=0,j=0,k=0;
	int a[300]={0};
	char b[10000];
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]!=' ')
			k++;
		if(b[i]==' '&&k!=0)
		{
			a[j]=k;
			j++;
			k=0;
		}		
	}
	for(i--;b[i]!=' '&&i>=0;i--)
		a[j]++;
	for(i=0;i<j;i++)
		my_printf("%d,",a[i]);
	my_printf("%d\n",a[j]);
}