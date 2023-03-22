#define NUM_ITER 2750

#include <header.h>

int main_bench()
{
	int n,l;
	char c[1000][105]={0};
    int k;
	int a[105]={0};
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",c[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<105;j++)
		{
			a[j]=0;
		}
		l=strlen(c[i]);
		my_printf("%s\n",c[i]);
		for(j=l-1;j>=0;j--)
		{
			if(c[i][j]=='(')
			{
				for(k=j+1;k<l;k++)
				{
					if(c[i][k]==')')
					{
						c[i][k]=0;
						c[i][j]=0;
						break;
					}
				}
				if(k==l)
				{
					c[i][j]=0;
					a[j]=1;
				}
			}
		}
		for(j=0;j<l;j++)
		{
			if(c[i][j]==')')
				a[j]=2;
		}
			for(j=0;j<l;j++)
			{
				if(a[j]==1) my_printf("$");
				else if(a[j]==2) my_printf("?");
				else my_printf(" ");
			}
			my_printf("\n");
	}


    return 0;
}





