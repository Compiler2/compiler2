#define NUM_ITER 866

#include <header.h>

struct book
{
	int num;
	char name[26];
}book[1000];
int judge(char*a,int b);
int main_bench()
{
	char c;
	int n=0,i=0,j=0,rec[26]={0},k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%s",&book[i].num,book[i].name);
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			if(judge(book[j].name,i)==1)
			{rec[i]++;}
		}
	}
	j=0;
	k=rec[0];
	for(i=0;i<25;i++)
	{
		if(k<rec[i])
		{
			j=i;
			k=rec[i];
		}
	}
	c='A'+j;
	my_printf("%c\n%d\n",c,k);
	for(i=0;i<n;i++)
	{
		if(judge(book[i].name,j)==1)
		{my_printf("%d\n",book[i].num);}
	}
	return 0;
}
int judge(char*a,int b)
{
	int i=0;
	for(i=0;i<26;i++)
	{
		if(a[i]=='A'+b)
			return 1;
	}
	return 0;
}