#define NUM_ITER 757886

#include <header.h>

int main_bench()
{
	char a[256];
	char b[256];
	char c[256];
	int i,j,k,l,m,n,sum=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	my_scanf("%s",c);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(b[j]==a[i+j]) sum+=1;
		if (sum==n) break;
		else sum=0;
	}
	if (sum==n)
	{
	for(k=i;k<n+i;k++)
		a[k]=c[k-i];
	}
	for(l=0;l<m;l++)
		my_printf("%c",a[l]);
	my_printf("\n");
	
	
}

