#include <header.h>

int main_bench()
{
	char string[5000];
	int i,num=0,n;
	char c;
	gets(string);
	n=strlen(string);
	for(i=0;i<=n-1;i++)
	{
		if((c=string[i])!=' ')
		num=num+1;
		else
		{
		    if(num!=0)
			{my_printf("%d,",num);
			num=0;}
		}

	}	
    my_printf("%d",num);
}
