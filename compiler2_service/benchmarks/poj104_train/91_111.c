#define NUM_ITER 1394037

#include <header.h>

int main_bench()
{
	char a[100];
	int i=1,j,m,n,p,s=0;
	gets(a);
	for(i=1;i<=100;i++)
	{
		if(a[i-1]!='\0')
			s=s+1;
		else
			break;
	}
	m=a[0];
	a[s]=m;
	for(j=1;j<=s;j++)
	{
		n=a[j-1];
		p=a[j];
		my_printf("%c",n+p);
	}
	return 0;
}




