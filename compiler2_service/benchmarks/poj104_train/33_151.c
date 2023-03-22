#define NUM_ITER 17852

#include <header.h>

int main_bench()
{
	int n,i,j,m[1000];
	char a[1000][1000],b[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		m[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(a[i]);j++)
		{
			if(a[i][j]=='A'){
				b[j]='T';
			}
			if(a[i][j]=='T'){
				b[j]='A';
			}
			if(a[i][j]=='G'){
				b[j]='C';
			}
			if(a[i][j]=='C'){
				b[j]='G';
			}
			my_printf("%c",b[j]);

		}
		my_printf("\n");

	}
	return 0;
}
