#define NUM_ITER 1016858

#include <header.h>

int cap(char s[],char w[],int i)
{
	int j;
	for(j=0;j<=strlen(s);j++)
	{

		if(s[j]!=w[j+i])
			break;
	}
	if(j==strlen(s)||j==strlen(s)+1)
	{
		return 1;
	}
	else
		return 0;
}
int main_bench()
{
	char s[51],w[51];
	my_scanf("%s%s",s,w);
	int i,l=strlen(w),ls=strlen(s);
	for(i=0;i<=l-ls;i++)
	{

		if(cap(s,w,i)==1)
		{
			my_printf("%d",i);
			break;
		}
	}

	if(i>l-ls)
		my_printf("error");
}