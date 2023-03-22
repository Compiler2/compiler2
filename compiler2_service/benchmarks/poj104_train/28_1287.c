#define NUM_ITER 1319613

#include <header.h>

int main_bench()
{
	char x[3000];
	int n,i,j,a[300],b[300],A,B,c[300];
	gets(x);
	n=strlen(x);
	a[1]=0;
	A=1;
	B=0;
	for(i=0;i<n;i++)
	{
		if((x[i]!=' ')&&(x[i-1]==' '))
		{
			A=A+1;
			a[A]=i;
		}
		if(((x[i]!=' ')&&(x[i+1]==' '))||(x[i+1]=='\0'))
		{
			B=B+1;
			b[B]=i;
			c[B]=b[B]-a[A]+1;
		}
	}
	for(i=1;i<B;i++)
	{
		my_printf("%d,",c[i]);
	}
	my_printf("%d",c[B]);
}