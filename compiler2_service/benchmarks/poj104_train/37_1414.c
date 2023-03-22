#include <header.h>

int main_bench()
{
	int t,i,n,j,k;
	char str[100000];
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",str);
		n=strlen(str);
		for(j=0;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(str[j]==str[k]){str[j]=str[k]=1;break;}
			}
			if(k==j+1){j=k;}
			else if(k==n){my_printf("%c\n",str[j]);break;}
		}
		if(j>=n-1){my_printf("no\n");}
	}
}