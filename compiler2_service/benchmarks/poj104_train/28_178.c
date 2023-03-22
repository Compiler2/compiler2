#include <header.h>

int main_bench()
{
	char c[1000];
	int i,n=0,flag=0;
	gets(c);
	for(i=0;c[i]!='\0';i=i+1)
	{
		if(c[i]!=' ')
			n=n+1;
		else
		{
			if(n!=0)
			{
				if(flag==0)
				{
					my_printf("%d",n);
					flag=1;
				}
				else
					my_printf(",%d",n);
				n=0;
			}
			else
				continue;
		}
	}
	if(n!=0)
	{
		if(flag!=0)
			my_printf(",%d\n",n);
		else 
			my_printf("%d\n",n);
	}
}