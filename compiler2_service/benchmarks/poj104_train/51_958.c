#define NUM_ITER 675331

#include <header.h>

int main_bench()
{
	int n;
	int i,j;
	int m,max;
	int p=0;
	int q=0;
	char tmp[500][5]={0};
	char str[500]={0};
	int a[500]={0};

	my_scanf("%d\n",&n);
	gets(str);
	m=strlen(str);

	
	for(i=0;i<m-n+1;i++)
	{
		for(j=i;j<=i+n-1;j++)
		{
			tmp[i][p]=str[j];
			p++;
		}
		p=0;
	}

	for(i=0;i<m-n+1;i++) a[i]=1;
	for(i=0;i<m-n;i++)
	{
		for(j=i+1;j<m-n+1;j++)
		{
			if(strcmp(tmp[i],tmp[j])==0)
				a[i]=a[i]+1;
		}
	}

	max=a[0];
	for(i=0;i<m-n+1;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			q=i;
		}
	}

	if(max==1) my_printf("NO");
	else
	{
	my_printf("%d\n",max);
	for(i=0;i<m-n+1;i++)
	{
		if(a[i]==max) my_printf("%s\n",tmp[i]);
	}
	}
	return 0;
}