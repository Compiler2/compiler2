#define NUM_ITER 17524

#include <header.h>

int main_bench()
{
	int n,i,j,m,p,l;
	char s[100][100];
	int a[100]={0};
	my_scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		gets(s[i]);
		l=strlen(s[i]);
		for(j=0;j<l;j++)
		{
			a[j]=0;
		}
		for(j=0;j<l;j++)
		{
			if(s[i][j]=='(')
				a[j]=1;
			if(s[i][j]==')')
				a[j]=2;
		}
		for(j=0;j<l;j++)
		{
			if(a[j]==2)
			{
				for(m=j;m>=0;m--)
				{
					if(a[m]==1)
					{
						a[m]=0;
						a[j]=0;
						break;
					}
				}
			}
		}
		puts(s[i]);
		for(j=0;j<l;j++)
		{
			if(a[j]==1)
			{
				my_printf("$");
			}
			if(a[j]==2)
			{
				my_printf("?");
			}
			if(a[j]==0)
			{
				my_printf(" ");
			}
		}
		my_printf("\n");
	}
	}