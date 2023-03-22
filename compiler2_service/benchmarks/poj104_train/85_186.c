#define NUM_ITER 33876

#include <header.h>

int main_bench()
{
	int n;
	int i,j,k;
	char s[1000];
	my_scanf ("%d",&n);
	for (i=2;i<=n+1;i++)
	{
		k=1;
		my_scanf ("%s",s);
		if(isalpha(s[0])||s[0]=='_')
		{
			for (j=1;s[j]!='\0';j++)
			{
				if (isalnum (s[j])||s[j]=='_')
				{
					k++;
				}
				
			}	
			if (k==j)
			{
				my_printf ("yes\n");
			}
			else 
			{
				my_printf("no\n");
			}
		}
		else
		{
			my_printf("no\n");
		}	
	}
	return 0;
}

