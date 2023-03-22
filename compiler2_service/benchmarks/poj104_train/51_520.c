#include <header.h>

int main_bench()
{
	int n,i,j,k,b=0,c[500];
	char a[500];
	for(i=0;i<500;i++)
	{
		c[i]=1;
	}
    my_scanf("%d",&n);
	my_scanf("%s",a);
	int len=strlen(a);
	for(k=0;k<len-n+1;k++)
	{
		for(i=k+1;i<len-n+1;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[k+j]==a[i+j])
				{
					b++;
				}
			}
			if(b==n)
			{
				c[k]++;
			}
			b=0;
		}
			
	}
	int max=1;
	for(i=0;i<len;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	if(max==1)
	{
		my_printf("NO");
	}
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<len-n+1;i++)
		{
			if(c[i]==max)
			{
				for(j=i;j<i+n;j++)
				{
					my_printf("%c",a[j]);
				}
				my_printf("\n");
			}
		}
	}
	return 0;
}

		
