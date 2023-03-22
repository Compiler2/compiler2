#define NUM_ITER 1255985

#include <header.h>

int main_bench()
{
	char input[110],a[100][100];
	gets(input);
	int i,len,b=1,j,c=0,d=0;
	len=strlen(input);
	for(i=0;i<len;i++)
	{
		if(input[i]==' ')
			b++;
	}
	for(j=0;j<b;j++)
	{
		for(i=c;i<len;i++)
		{
			if(input[i]==' ')break;
			a[j][d]=input[i];
			d++;
		}
		a[j][d]='\0';
		d=0;
		c=i+1;
	}
	for(j=b-1;j>0;j--)
	{
		my_printf("%s ",a[j]);
	}
	my_printf("%s",a[0]);
	return 0;
}

