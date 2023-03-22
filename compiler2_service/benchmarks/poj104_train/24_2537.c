#define NUM_ITER 32231

#include <header.h>

int main_bench()
{
	int n,i,l=0,s=100,p;
	char a[200][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a[i]);
		p=strlen(a[i]);
		if(p>l)
			l=p;
		if(p<s)
			s=p;
	}
	for(i=0;i<n;i++)
	{
		p=strlen(a[i]);
		if(p==l)
		{
			puts(a[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		p=strlen(a[i]);
		if(p==s)
		{
			puts(a[i]);
			break;
		}
	}
	return 0;
}