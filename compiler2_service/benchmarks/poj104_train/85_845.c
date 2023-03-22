#include <header.h>

int main_bench()
{
	int n,i,flag=0,flag1=0,j;
	char a[21];
	my_scanf("%d",&n);

	for(j=1;j<=n;j++)
	{
		my_scanf("%s",a);
		if((a[0]==95) || (a[0]>=65 && a[0]<=90) || (a[0]>=97 && a[0]<=122))
		{
			flag=1;
		}
	    else
		{
			my_printf("no\n");
		}

		if(flag==1)
		{
			for(i=1;i<strlen(a);i++)
			{
				if((a[i]==95) || (a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) || (a[i]>=48 && a[i]<=57))
				{
					flag1=1;
				}
				else
				{
					my_printf("no\n");
					flag1=2;
					break;
				}
			}
			if(flag1==1)
			{
				my_printf("yes\n");
			}		
		}
		memset(a,'0',sizeof(a));
	    i=0;
	    flag=0;
	    flag1=0;
	}
	return 0;
}

