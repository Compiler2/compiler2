#define NUM_ITER 32591

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char a[300],b[300];
	int i,j;
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]=='A')
				b[j]='T';
			if(a[j]=='T')
				b[j]='A';
			if(a[j]=='C')
				b[j]='G';
			if(a[j]=='G')
				b[j]='C';
		}
		b[j]='\0';
		my_printf("%s\n",b);
	}
	return 0;
}