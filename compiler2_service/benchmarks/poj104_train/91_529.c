#define NUM_ITER 1044364

#include <header.h>

int main_bench()
{
	int i,j,k;
	char a[150],e; 
	gets(a);
	e=a[0];
	for(i=0;i<strlen(a)-1;i++)
	{
		a[i]=a[i]+a[i+1];
		my_printf("%c",a[i]);
	}
	a[i]=a[i]+e; 
	my_printf("%c",a[i]);
	my_scanf("%d",&i);   
	return 0;
}