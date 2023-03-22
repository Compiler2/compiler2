#define NUM_ITER 64594

#include <header.h>

int main_bench()
{
	char str[600];
	int n, i, j, length, len[600] = { 0 }, log, num, sum, max;
	char a[600][7] = { { '\0' } }, ch[600][10] = { { '\0' } };
	my_scanf("%d\n",&n);
	gets(str);
	
	length=strlen(str);
	for(i=0;i<=length;i++)
	{
			for(j=0;j<n;j++)
			{
				a[i][j]=str[i+j];
			}
	}
	log=i-1;
	strcpy(ch[0],a[0]);
	num=0;
	len[0]=1;
	for(i=1;i<=log;i++)
	{
		for(j=0,sum=0;j<=num;j++)
		{
			if(strcmp(ch[j],a[i])==0)
			{
				len[j]++;
				sum=1;
			}
		}
		if(sum!=1)
		{
			num++;
			len[num]=1;
			strcpy(ch[num],a[i]);
		}
	}
	max=len[0];
	for(i=1;i<=num;i++)
	{
		if(max<len[i])
		{
			max=len[i];
		}
	}
	if(max<=1)
	{
		my_printf("NO");
	}else{
	my_printf("%d\n",max);
	for(i=0;i<=log;i++)
	{
		if(len[i]==max)
		{
			my_printf("%s\n",ch[i]);
		}
	}
	}
	return 0;
}
		

