#define NUM_ITER 29018

#include <header.h>

int main_bench()
{
    int n,m,i,j,k,flag;
	char str[100001];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		flag=1;
		my_scanf("%s",str);
		m=strlen(str);
		for(j=0;str[j];j++)
		{
			for(k=0;str[k];k++)
			{
				if(j==k)continue;
				if(str[j]==str[k])break;
			}
			if(k==m)
			{
				my_printf("%c\n",str[j]);
				flag=0;
				break;
			}
			if(flag==0) break;
		}
		if(j==m)
			my_printf("no\n");
	}
	return 0;
}