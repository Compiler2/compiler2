#define NUM_ITER 22066

#include <header.h>

int main_bench()
{
	int n,i,j,sum[100],c;
	char str[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(j=0;str[i][j]!='\0';j++)
		{
			if(j==0)
			{
				if((str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z')||(str[i][j]=='_'))
				{
					sum[i]++;
				}
			}
			else if(j>0)
			{
				if((str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z')||(str[i][j]>='0'&&str[i][j]<='9')||(str[i][j]=='_'))
				{
					sum[i]++;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		c=strlen(str[i]);
		if(sum[i]==c)
		{
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
		return 0;
}

