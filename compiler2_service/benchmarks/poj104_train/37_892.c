#include <header.h>

int main_bench()
{
	char a[100001];
	int t,n,i,j,k,p;
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int s[100001]={0};
		my_scanf("%s",a);
		n=strlen(a);
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]==a[j])
				{
					s[j]+=1;
				}
			}
		}
		for(p=0;p<n;p++)
		{
			if(s[p]==1)
			{
				my_printf("%c\n",a[p]);
				break;
			}
		}
		if(p==n)
		{
			my_printf("no\n");
		}
	}
	return 0;
}


	