#define NUM_ITER 1324590

#include <header.h>

int main_bench()
{
	char a[100];
	gets(a);
	int len=strlen(a);
	int i,j;
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			for(j=1;j<(len-1-i);j++)
			{
				if(a[i+j]==' ')
					a[i+j]='#';
				else
					break;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		if(a[i]!='#')
			my_printf("%c",a[i]);
	}
	return 0;

}