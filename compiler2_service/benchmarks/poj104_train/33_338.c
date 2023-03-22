#define NUM_ITER 20885

#include <header.h>

int main_bench()
{
	int n,i,l,j;
	char a[1100][256];
	char b[256];
	my_scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		my_scanf("%s",b);
		l=strlen(b);
		for(j=0;j<=(l-1);j++)
		{
			 if(b[j]=='A')
				b[j]='T';
             else if(b[j]=='T')
				b[j]='A';
             else if(b[j]=='G')
 				b[j]='C';
             else if(b[j]=='C')
				b[j]='G';
		}
		strcpy(a[i],b);
	}
	for(i=0;i<=(n-1);i++)
		my_printf("%s\n",a[i]);
}