#define NUM_ITER 1073458

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,j,k,m,n,sig=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
	n=strlen(a);
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]==a[i])
				{
					b[j]=0;
					break;
				}
				
			}
			if(j==n)
				{my_printf("NO");
				break;}
		}
		if(i==n)
			my_printf("YES");
		 
	}
	else
		my_printf("NO");
}

	

		
	