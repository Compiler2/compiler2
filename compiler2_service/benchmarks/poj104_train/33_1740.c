#define NUM_ITER 25474

#include <header.h>

int main_bench()
{
	int n;
    char a[1000][300],b[1000][300];
	my_scanf("%d",&n);
	int i,j,m;
	for(i=0;i<n;i++)
	{
        my_scanf("%s",a[i]);
	}
    for(i=0;i<n;i++)
	{
	    for(j=0,m=0;a[i][j];j++)
		{
			if(a[i][j]=='A')
			{
				b[i][m]='T';
				m++;
			}
			if(a[i][j]=='T')
			{
				b[i][m]='A';
				m++;
			}
			if(a[i][j]=='C')
			{
				b[i][m]='G';
				m++;
			}
			if(a[i][j]=='G')
			{
				b[i][m]='C';
				m++;
			}
		}
		b[i][m]='\0';
	}
	for(i=0;i<n;i++)
	{
	    my_printf("%s\n",b[i]);
    }
	return 0;
}