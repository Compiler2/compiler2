#define NUM_ITER 1007937

#include <header.h>


int main_bench()
{
	char s[50],w[50];
	int m,n,i,j,k;
	my_scanf("%s%s",s,w);
	m=strlen(w);
	n=strlen(s);
	for (i=0;i<m;i++)
	{
		k=i;
		for (j=0;j<n;j++,i++)
		{
			if (s[j]!=w[i])
				break;
		}
		i=k;
		if (j==n)
			break;
	}
	my_printf("%d\n",i);
}