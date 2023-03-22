#define NUM_ITER 26536

#include <header.h>

int main_bench()
{
	int n,i,l,j;
	char a[256],t='T',b='A',g='G',c='C';
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(a[j]=='A')
				my_printf("%c",t);
			if(a[j]=='T')
				my_printf("%c",b);
			if(a[j]=='C')
				my_printf("%c",g);
			if(a[j]=='G')
				my_printf("%c",c);
		}
		my_printf("\n");
	}
	return 0;
}