#define NUM_ITER 1297956

#include <header.h>

int main_bench()
{
	char a[100];
	gets(a);
	int n;
	n=strlen(a);
	int i,j,k;
	char b[100];
	for(i=0,k=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			b[k]=a[i];
			k++;
		}
		if(a[i]==' ' && a[i+1]!=' ')
		{
			b[k]=a[i];
			k++;
		}
		if(a[i]==' ' && a[i+1]==' ')
			continue;
	}
	for(i=0;i<k;i++)
		my_printf("%c",b[i]);
	return 0;
}