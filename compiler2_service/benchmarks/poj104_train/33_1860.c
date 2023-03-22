#define NUM_ITER 29173

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d\n",&n);
	char d[256]={'\0'};
    for(i=0;i<n;i++)
	{
	    char a[256]={'\0'};
		my_scanf("%s",&d);
		for(j=0;d[j]!='\0';j++)
		{
			if(d[j]=='A')
			{
				a[j]='T';
			}
			if(d[j]=='T')
			{
				a[j]='A';
			}
			if(d[j]=='C')
			{
				a[j]='G';
			}
			if(d[j]=='G')
			{
				a[j]='C';
			}
		}
		my_printf("%s\n",a);
	}
	return 0;
}
