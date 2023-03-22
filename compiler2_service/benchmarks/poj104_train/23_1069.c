#define NUM_ITER 1476590

#include <header.h>

void turn(char a[100])
{
	int i,j,k;
	char b[100][100];
	i=0;j=0;k=0;
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		if(a[i]==' ')
		{
			b[j][k]='\0';
			k=0;
			j++;
		}
		i++;
	}
	b[j][k]='\0';
	for(i=j;i>0;i--)
		my_printf("%s ",b[i]);
	my_printf("%s",b[i]);
}
int main_bench()
{
	char a[100];
	gets(a);
	turn(a);
}