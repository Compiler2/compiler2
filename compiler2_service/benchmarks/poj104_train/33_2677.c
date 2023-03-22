#include <header.h>



int main_bench()
{
	int n,x;
	my_scanf("%d ",&n);
	for(x=0;x<n;x++)
	{
		char c[256]={'\0'};
		my_scanf("%s",c);
		int i,len;
		len=strlen(c);
		for(i=0;i<len;i++)
		{
			if(c[i]=='A')
			{
				c[i]='T';
				continue;
			}
			if(c[i]=='T')
			{
				c[i]='A';
				continue;
			}
			if(c[i]=='C')
			{
				c[i]='G';
				continue;
			}
			if(c[i]=='G')
			{
				c[i]='C';
				continue;
			}
		}
		if(x<n-1)
		my_printf("%s\n",c);
		else
			my_printf("%s",c);
	}
	return 0;
}