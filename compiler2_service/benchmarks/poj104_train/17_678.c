#define NUM_ITER 22888

#include <header.h>

int main_bench()
{
	int n,i,s,j,k;
	char c[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		my_scanf("%s",&c);
		s=strlen(c);
		my_printf("%s\n",c);
		for(j=0;j<s;j++)
		{
			if(c[j]!='(' && c[j]!=')')
				c[j]=' ';
			if(c[j]==')')
			{
				for(k=j;k>=0;k--)
				{
					if(c[k]=='(')
					{
						c[j]=' ';
						c[k]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<s;j++)
		{
			if(c[j]=='(')
				c[j]='$';
			if(c[j]==')')
				c[j]='?';
		}
		my_printf("%s\n",c);
	}
	return 0;
}