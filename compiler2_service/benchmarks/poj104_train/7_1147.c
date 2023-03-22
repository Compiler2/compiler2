#define NUM_ITER 942367

#include <header.h>

int main_bench()
{
	char s[512],w[257],r[257];
	int m,n;
	int i,j,k;
	int t;
	my_scanf("%s%s%s",s,w,r);
	m=strlen(s);
	n=strlen(w);
	for(i=0;i<=m-n;i++)
	{
		t=0;
		for(j=0;j<n;j++)
		{
			if(w[j]!=s[i+j])
				t=1;
		}
		if(t==0)
			break;
	}
	if(t==0)
	{
		for(k=i;k<=i+n-1;k++)
		{
			s[k]=r[k-i];
		}
		my_printf("%s",s);
	}
	else
	{
		my_printf("%s",s);
	}
}