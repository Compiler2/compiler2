#include <header.h>

int main_bench()
{
	struct word
	{
		char a[100];
		int line;
		int num;
		int flag;
	}word1[1000]={0};
    int i,j,n,k,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word1[i].a);
	}
	for(j=0;j<n;j++)
	{
		sum+=(1+strlen(word1[j].a));
		(word1[j].num)++;
		if(sum>81)
		{
			sum=strlen(word1[j].a)+1;
			word1[j].num=0;
			(word1[j].line)++;
			word1[j-1].flag=1;
		}
	}

    for(k=0;k<n-1;k++)
	{
		if(word1[k].flag==0)
		{
			my_printf("%s ",word1[k].a);
		}
		if(word1[k].flag==1)
		{
			my_printf("%s\n",word1[k].a);
		}
	}
my_printf("%s\n",word1[n-1].a);
}