#define NUM_ITER 964794

#include <header.h>

int main_bench()
{
	int i,j,n;
	char a[2][100];
	gets(a[0]);
	gets(a[1]);
	for(i=0;i<2;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]<='z'&&a[i][j]>='a')
				a[i][j]-=32;
		}
	}
	n=strcmp(a[0],a[1]);
	if(n==1)
		my_printf(">");
	else if(n==0)
		my_printf("=");
	else if(n==-1)
		my_printf("<");
	return 0;
}