#define NUM_ITER 31460

#include <header.h>

int main_bench()
{
	int n,i,number;
	char str1[33];
	my_scanf("%d",&n);
	for(i=0,number=0;i<n;i++)
	{
		my_scanf("%s",str1);
		number=strlen(str1);
		if(str1[number-1]=='r')
		{
			str1[number-2]='\0';
			my_printf("%s\n",str1);
		}
		else
			if(str1[number-1]=='y')
			{
				str1[number-2]='\0';
				my_printf("%s\n",str1);
			}
			else
				if(str1[number-1]=='g')
				{
					str1[number-3]='\0';
					my_printf("%s\n",str1);
				}
	}
}