#include <header.h>

int main_bench()
{
	int n,i,j;
	char a[25];
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(a);
		for(j=0;j<=strlen(a)-1;j++)
		{
			if(j==0)
			{
				if(a[0]>='A'&&a[0]<='Z'||a[0]>='a'&&a[0]<='z'||a[0]=='_');
				else	
				{
					my_printf("no\n");
					break;
				}
			}
			else
			{
				if(a[j]>='A'&&a[j]<='Z'||a[j]>='a'&&a[j]<='z'||a[j]=='_'||a[j]>='0'&&a[j]<='9')
				{
					if(j==strlen(a)-1)
					{
						my_printf("yes\n");break;
					}
				}
				else
				{
					my_printf("no\n");break;
				}
			}
		}
	}
}