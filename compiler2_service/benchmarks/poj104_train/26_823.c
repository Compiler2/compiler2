#include <header.h>

int main_bench()
{
	char zfc[101];
	gets(zfc);
		for(int j=0;j<=99;j++)
		{
			while(zfc[j]==zfc[j+1] && zfc[j]==' ')
			{
				for(int i=j;i<=99;i++)
				{
					zfc[i]=zfc[i+1];
				}
			}
		}
		my_printf("%s",zfc);
		return 0;
}
