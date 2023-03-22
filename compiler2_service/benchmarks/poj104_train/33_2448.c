#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[1000][255]={0},b[1000][255]={0};
	my_scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		my_scanf("%s",a[i]);
		int l=strlen(a[i]);
		for(j=0; j<l; j++)
		{
			if(a[i][j]=='A')
				b[i][j]='T';
			if(a[i][j]=='T')
				b[i][j]='A';
			if(a[i][j]=='C')
				b[i][j]='G';
			if(a[i][j]=='G')
				b[i][j]='C';
		}
		my_printf("%s\n",b[i]);
	}
	return 0;
}
