#define NUM_ITER 1113958

#include <header.h>

main_bench()
{
	int i,j,m=0,n=0,p=0;
	char a[100],b[100][100];
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
        if(a[i]!=' ')m++;
		if(a[i]==' '||i==strlen(a)-1)
		{
			for(j=0;j<m;j++)
			b[n][j]=a[j+p];
			m=0;
			p=i+1;
			n++;
		}
	}
	my_printf("%s",b[n-1]);
	for(i=n-2;i>=0;i--)
		my_printf(" %s",b[i]);
}


	