#define NUM_ITER 20167

#include <header.h>


int main_bench()
{
	int n, l, i, k;
	char str[200]={0};
	my_scanf("%d\n", &n);
	while(n)
	{
		my_scanf("%s", str);
		puts(str);
		my_printf("\n");
		l=strlen(str);
		for(i=l-1; i>=0; i--)
		{
			if(str[i]=='(')
			{
				for(k=i; k<l; k++)
				{
					if(str[k]==')')
					{
						str[i]=' ';
						str[k]=' ';
						k=l;
					}
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(str[i]=='(')
			{
				str[i]='$';
			}
			else if(str[i]==')')
			{
				str[i]='?';
			}
			else
			{
				str[i]=' ';
			}
		}
		puts(str);
		n--;
	}
	return 0;
}