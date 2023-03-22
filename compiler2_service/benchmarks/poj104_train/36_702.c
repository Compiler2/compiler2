#define NUM_ITER 818230

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int flag=0,i,j,len,c[100]={'0'};
	my_scanf("%s%s",a,b);
	len=strlen(a);
	if(strlen(a)!=strlen(b))
		my_printf("NO");
	else
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				if(c[j]==0)
				{
					if(a[i]==b[j])
					{
						c[j]=1;
						break;
					}
				}
			}
		}
		for(j=0;j<len;j++)
		{if(c[j]==0) flag=1;}
		if(flag)
			my_printf("NO");
		else
			my_printf("YES");

	}


}

