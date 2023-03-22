#define NUM_ITER 17524

#include <header.h>

int main_bench()
{
	int n,i,j,k,l;
	char a[100][120];
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		puts(a[i]);
		k=strlen(a[i]);
		for(j=0;j<k;j++)
		{

			if(a[i][j]==')')
			{
				a[i][j]='?';
			}
			if(a[i][j]=='(')
			{
				a[i][j]='$';
			}
		}
        for(j=0;j<k;j++)
		{
			if(a[i][j]!='?'&&a[i][j]!='$')
			{
				a[i][j]=' ';
			}
		}
		for(j=0;j<k;j++)
		{
			if(a[i][j]=='?')
			{
				for(l=j;l>=0;l--)
				{
					if(a[i][l]=='$')
					{
						a[i][j]=' ';
						a[i][l]=' ';
					    break;
					}
				}
			}
		}
		for(j=0;j<k;j++)
		{
			my_printf("%c",a[i][j]);
		}
		my_printf("\n");	
	}
	return 0;
}