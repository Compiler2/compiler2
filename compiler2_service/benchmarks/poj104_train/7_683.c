#include <header.h>

int main_bench()
{
	char string[500],substring[50],replacement[50];
	int same,i,k,c;
	my_scanf("%s%s%s",string,substring,replacement);
	for (i=0;i<strlen(string);i++)
	{
		same=1;
		for (k=0;k<strlen(substring);k++)
		{
			if (string[i+k]!=substring[k])
			{
				same=0;
			}
		}
		if(same==1)
		{
			my_printf("%s",replacement);
			c=i;
			break;
		}
		else
		{
			my_printf("%c",string[i]);
		}
	
	}
	for(i=c+strlen(substring);i<strlen(string);i++)
	{
		my_printf("%c",string[i]);
	}
	return 0;
}