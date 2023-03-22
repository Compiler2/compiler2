#define NUM_ITER 1117450

#include <header.h>

int main_bench()
{
	int n,i,j,k,m;
	char a[50000];
	int b[20001];
	my_scanf("%d\n",&n);
	gets(a);
	k=strlen(a);
	i=0;
	j=1;
	while(i<=k-1)
	{
		b[j]=(a[i]-48)*10+(a[i+1]-48);
		i=i+3;
		j=j+1;
	}
	j=j-1;
	my_printf("%d",b[1]);
	i=2;
	while(i<=j)
	{
		m=1;
		while(m<i)
		{
			if(b[i]==b[m]) break;
			m=m+1;
		}
		if(m==i) my_printf(" %d",b[i]);
		i=i+1;
	}
	return 0;
}