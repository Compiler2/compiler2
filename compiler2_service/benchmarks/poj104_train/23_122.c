#include <header.h>

int main_bench()
{
	char a[101][101],b[101];
	int i=1,j=0,k=0,l1,l2;
	gets(b);
	l1=strlen(b);
	for(j=0;j<l1;j++)
	{
		if(b[j]==' ')
		{
			a[i][k]='\0';
			i++;
			k=0;
		}
		else
		{
			a[i][k]=b[j];
			k++;
		}
	}
	a[i][k]='\0';
	for(j=i;j>=1;j--)
	{
		l2=strlen(a[j]);
		for(k=0;k<l2;k++)
			my_printf("%c",a[j][k]);
		if(j!=1)
			my_printf(" ");
		else
			my_printf("\n");
	}
}
	
	