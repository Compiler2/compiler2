#define NUM_ITER 31667

#include <header.h>

int main_bench()
{
	int i,n,len,j;
	char str[21]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
loop:		my_scanf("%s",str);
		len=strlen(str);
		if(str[0]=='_' || (str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z'))
		{}
		else
		{
			my_printf("no\n");
			continue;
		}
		for(j=1;j<len;j++)
		{
			if(str[j]=='_' || (str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z') || (str[j]>='0' && str[j]<='9'))
			{}
			else
			{	
				my_printf("no\n");
				i++;
				if(i<n)
					goto loop;
				else
					return 0;
			}
		}
		my_printf("yes\n");
	}
	return 0;
}

