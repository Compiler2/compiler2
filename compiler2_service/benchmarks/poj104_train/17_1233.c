#define NUM_ITER 2616

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char a[102];
	int i,j,L,k;
	int b[102]={0};
	for(k=0;k<n;k++)
	{
		for(i=0;i<102;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		my_scanf("%s",a);
		my_printf("%s\n",a);
	L=strlen(a);
		for(i=L-1;i>=0;i--)
		{
			if(a[i]=='(')
			{
				for(j=i+1;j<L;j++)
				{
					if(a[j]==')')
					
					{
						a[i]=0;
						a[j]=0;
						break;
					}
                }
	        if(j==L) b[i]=1;
			}
		}
	
		for(i=0;i<L;i++)
		{
			if(a[i]==')')
			 b[i]=2;
                
		}
		for(i=0;i<L;i++)
		{
			if(b[i]==1) my_printf("$");
			else if(b[i]==2) my_printf("?");
			else my_printf(" ");
		}
my_printf("\n");
	}
		return 0;
}



