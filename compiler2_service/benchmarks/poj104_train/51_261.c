#define NUM_ITER 1096608

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	char c[501];
	gets(c);
	char s[500][6];
	int i,l=strlen(c),j,a[501];
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
			s[i][j]=c[i+j];
		s[i][j]=0;
	}

	for(i=0;i<=l-n;i++)
		a[i]=1;
	for(i=0;i<=l-n;i++)
		for(j=i+1;j<=l-n;j++)
		{
			if(strcmp(s[i],s[j])==0)
				a[i]++;
		}

	int k=0;
	for(i=0;i<=l-n;i++)
		if(a[i]>k)
			k=a[i];
	if(k<=1)
		my_printf("NO");
	else
	{
	my_printf("%d\n",k);
	for(i=0;i<l-n;i++)
		if(a[i]==k)
			puts(s[i]);
	}
}