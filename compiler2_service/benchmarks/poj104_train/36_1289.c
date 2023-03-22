#include <header.h>

int main_bench()
{
    int la,lb,i,j,count=0;
	char a[100],b[100];
	my_scanf("%s %s",a,b);
    la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
	{
		my_printf("NO");
	}
	else
	{
	    for(i=0;i<la;i++)
		{
		    for(j=0;j<lb;j++)
			{
				if(a[i]==b[j])
				{
					
					b[j]=j;
					count++;
					break;
				}
			}
		}
		if(count==la)
		{
			my_printf("YES");
		}
		else
		{
			my_printf("NO");
		}
	}


	return 0;
}