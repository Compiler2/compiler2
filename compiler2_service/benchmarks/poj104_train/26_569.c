#define NUM_ITER 1164039

#include <header.h>

int main_bench()
{
	int i,count=0,weizhi[100];
	char zf[200];
	gets(zf);
	for(i=0;i<strlen(zf);i++)
	{
		if(zf[i]==' ');
		{
			weizhi[count]=i;
		}
	}
	for(i=0;i<strlen(zf);i++)
	{
		if(zf[i]!=' ')
		{
			my_printf("%c",zf[i]);
		}
		else if(zf[i]==' ')
		{
			my_printf(" ");
			while(1)
			{
				if(zf[i+1]==' ')
				{
					i++;
				}
				else
				{
					break;
				}
			}
		}
	}
	return 0;
}