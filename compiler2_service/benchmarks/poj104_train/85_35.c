#define NUM_ITER 25390

#include <header.h>

int main_bench()
{
    int n,i,j;
	my_scanf("%d",&n);
	int length[1000];
	char a[1000][20];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		length[i]=strlen(a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i][0]>=48&&a[i][0]<=57)
		{
			my_printf("no");
			
		}
		else 
		{
			for(j=0;j<20;j++)
			{
				if(a[i][j]<48)
				{
					break;
				}
				else if(a[i][j]>=58&&a[i][j]<=64)
				{
					break;
				}
				else if(a[i][j]>=91&&a[i][j]<=94 ||a[i][j]==96)
				{
					break;
				}
				else if(a[i][j]>=123&&a[i][j]<=126)
				{
					break;
				}			

			}
			if(j>=length[i])
			{
				my_printf("yes");
			}
			else
			{
				my_printf("no");
			}
			my_printf("\n");
			
		}
		my_printf("\n");
	}	
	return 0;
}