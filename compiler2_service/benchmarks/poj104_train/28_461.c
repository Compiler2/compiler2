#define NUM_ITER 1307173

#include <header.h>

int main_bench()
{
	char A[1000];
	int B[100];
	gets(A);
	int i=0,j=0,l,k;
	l=strlen(A);
	for(k=0;k<=l;k++)
	{
		if(A[k]==' '||A[k]=='\0')
		{
			B[j]=i;
			j++;
			i=0;
			continue;
		}
		i++;
	}
	l=j;
	for(j=0;j<(l-1);j++)
	{
		if(B[j]==0)
			continue;
		else
			my_printf("%d,",B[j]);
	}
	my_printf("%d",B[l-1]);
}