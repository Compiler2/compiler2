#define NUM_ITER 1235346

#include <header.h>

int main_bench()
{
	char str[2000];
	int i,j=0,t;
	gets(str);
	t=strlen(str);
	for(i=0;i<t;i++)
	{
		if(str[i]>'Z')
			str[i]-=32;
	}
	for(i=0;i<t;i++)
	{
		if(str[i]!=str[i-1])
		{
			for(j=i;j<t;j++)
			{if(str[j]!=str[i])
			break;
			}
			my_printf("(%c,%d)",str[i],j-i);
		}
	}
	return 0;
}