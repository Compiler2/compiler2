#define NUM_ITER 169768

#include <header.h>






int main_bench()
{
	char a[100][100];
	int l[100],i=0,j,k,p;
	for(i=0;i<=100;++i)
	{
		for(j=0;j<=100;++j)
		{
			my_scanf("%c",&a[i][j]);
			if(a[i][j]==' '||a[i][j]=='\n') break;
		}
		if(a[i][j]==' ') a[i][j]='\0';
		if(a[i][j]=='\n') 
		{
			a[i][j]='\0';
			break;
		}
	}
	my_printf("%s",a[i]);
	for(k=i-1;k>=0;--k)
	{
		my_printf(" %s",a[k]);
	}
	return 0;
}