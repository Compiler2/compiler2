#define NUM_ITER 25651

#include <header.h>


int main_bench()
{
	int n,i,j,len;
	struct p {
		char a[256];
	}p[10000];
    my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s\n",p[i].a);
	}
	for(i=0;i<n;i++)
	{
		len=0;
		len=strlen(p[i].a);
		for(j=0;j<len;j++)
		{
			if(p[i].a[j]=='A')
				p[i].a[j]='T';
			else if(p[i].a[j]=='T')
				p[i].a[j]='A';
			else if(p[i].a[j]=='G')
				p[i].a[j]='C';
			else
				p[i].a[j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s\n",p[i].a);
	}
	return 0;
}