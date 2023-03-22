#include <header.h>

int main_bench()
{
	int n,i,j,k,m;
	char a[101];
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		for(i=0;i<101;i++)
		{
			a[i]=0;
		}
		my_scanf("%s",a);
		my_printf("%s\n",a);
		m=strlen(a);
		for(i=0;i<m;i++)
		{
			if((a[i]!='(')&&(a[i]!=')'))
			{
				a[i]=' ';
			}
		}
		for(i=0;i<m;i++)
		{
			if(a[i]==')')
			{
				for(k=i;k>=0;k--)
				{
					if(a[k]=='(')
					{
						a[i]=' ';
						a[k]=' ';
						break;
					}
				}
				if(k==-1) a[i]='?';
			}
		}
		for(i=0;i<m;i++)
		{
			if(a[i]=='(') a[i]='$';
		}
		my_printf("%s\n",a);
	}
	return 0;
}
