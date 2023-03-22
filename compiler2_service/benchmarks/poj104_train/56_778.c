#define NUM_ITER 1529904

#include <header.h>

int main_bench()
{
	int n,i=0;
	char a[10],b[10];
	my_scanf("%s",&a);
	while(a[i]!='\0')
	{
		i++;
	}
	n=i-1;
	for(i=0;i<=n;i++)
	{
		b[i]=a[n-i];		
	}
	b[n+1]='\0';	my_printf("%s\n",b);
}
