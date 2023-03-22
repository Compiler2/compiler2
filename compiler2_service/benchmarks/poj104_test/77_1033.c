#define NUM_ITER 1354711

#include <header.h>

int main_bench()
{
	char a[100];
	int x,i,j,p;
	my_scanf("%s",a);
	x=strlen(a);
	p=0;
	while(p<x/2)
	{
		i=0;
		while(a[i]!=a[x-1]) {i++;j=i;} 
		j--;
		while(a[j]!=a[0]) {j--;}
		my_printf("%d %d\n",j,i);
		a[i]=a[j]=0;
	    p++;
	}
}


	

