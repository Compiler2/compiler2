#define NUM_ITER 882780

#include <header.h>

int main_bench()
{
	char s[505];
	int n[505]={0};
	int a,i,j,k,l,max=0,nu;
	int ju=1;
	my_scanf("%d",&nu);
	getchar();
	my_scanf("%s",s);
	l=strlen(s);
	for(i=0;i<=l-nu;i++)
	{
		n[i]=1;
	}
	for(i=0;i<=l-nu;i++)
	{
		for(j=i+1;j<=l-nu;j++)
		{
			for(k=0;k<=nu-1;k++)
			{
				if(s[i+k]!=s[j+k])
				{
					ju=0*ju;
				}
			}
			if(ju==1)
			{
				n[i]++;
			}
			ju=1;
		}
	}
	for(i=0;i<=l-nu;i++)
	{
		if(n[i]>=max)
		{
			max=n[i];
		}
	}
	if(max==1)
	{
		my_printf("NO\n");
		return 0;
	}
	my_printf("%d\n",max);
	for(i=0;i<=l-nu;i++)
	{
		if(n[i]==max)
		{
			for(j=i;j<=i+nu-1;j++)
			{
				my_printf("%c",s[j]);
			}
			my_printf("\n");
		}
	}
	return 0;
}
