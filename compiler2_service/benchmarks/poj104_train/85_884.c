#define NUM_ITER 11957

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char **a;
	a=(char **)malloc(sizeof(char *)*n);
	int i,j;
	for(i=0;i<n;i++)
	{
		a[i]=(char *)malloc(sizeof(char)*100);
		my_scanf("%s",a[i]);
		
	}
	
		
	int flag=1;
	for(i=0;i<n;i++)
	{
		if((a[i][0]==95)||(a[i][0]>=65&&a[i][0]<=90)||(a[i][0]>=97&&a[i][0]<=122))
		{
			for(j=1;j<(int)strlen(a[i]);j++)
			{
				if((a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122)||a[i][j]==95)
					continue;
				else
				{
					my_printf("no\n");
					break;
				}
			}
			if(j==(int)strlen(a[i]))
			   my_printf("yes\n");
		}

		else
			my_printf("no\n");
	}
	return 0;
}



   