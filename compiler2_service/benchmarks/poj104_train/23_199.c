#define NUM_ITER 1256237

#include <header.h>

int main_bench()
{
	int i,n,m;
	
	char a[101];
	char b[10][100];
	gets(a);
	

	n=m=0;i=0;
    while(a[i]!='\0')
	{
		while((a[i]!=' ')&&(a[i]!='\0'))
		{
			b[n][m]=a[i];
			i++;
			m++;
		}
		b[n][m]='\0';
		n++;m=0;
		while(a[i]==' ')
		{
			
			b[n][m]=a[i];
			m++;
			i++;
		}
		b[n][m]='\0';
		n++;m=0;
	}
	for(i=n-1;i>=0;i--)
	{
		my_printf("%s",b[i]);
	}
	
	return 0;
}

