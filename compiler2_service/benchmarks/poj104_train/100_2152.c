#define NUM_ITER 459796

#include <header.h>

int main_bench()
{
	int i,sum[30]={0},tot[30]={0},x=0;
	char zfc[305];
	my_scanf("%s",zfc);
	for(i=0;i<strlen(zfc);i++)
	{
		if(zfc[i]<='Z'&&zfc[i]>='A')
		{
			sum[zfc[i]-'A']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]!=0)
		{
			my_printf("%c=%d\n",i+'A',sum[i]);
			x=1;
		}
	}
	for(i=0;i<strlen(zfc);i++)
	{
		if(zfc[i]<='z'&&zfc[i]>='a')
		{
			tot[zfc[i]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(tot[i]!=0)
		{
			my_printf("%c=%d\n",i+'a',tot[i]);
			x=1;
		}
	}
	if(x==0)
	{
		my_printf("No");
	}
	return 0;
}