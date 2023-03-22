#include <header.h>

int main_bench()
{
	char s[1000][45];
	int n,i,j,k;
	int sum;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	sum=0;
	for(i=0;i<n-1;i++)
	{
		k=sum+strlen(s[i]);
		if(k<80)
		{
			if((k+1+strlen(s[1+i]))>80)
			{
				my_printf("%s\n",s[i]);
                sum=0;
			}else
			{
				my_printf("%s ",s[i]);
				sum+=strlen(s[i])+1;
			}
		}else
		{
			if(k==80)
			{
				my_printf("%s\n",s[i]);
				sum=0;
			}
		}
	}
	my_printf("%s",s[n-1]);
	return 0;
}