#define NUM_ITER 1418839

#include <header.h>


int main_bench()
{
	int i,j,k;
	char str[101];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			if(str[i+1]==' ')
			{
				for(j=i+1;;j++)
				{
					if(str[j]!=' ')
					{
						i=j;
						break;
					}
                    str[j]='0';
				}
			}
		}
	}
	for(k=0;str[k]!='\0';k++)
	{
		if(str[k]=='0')
			continue;
		else
			my_printf("%c",str[k]);
	}
	return 0;
}