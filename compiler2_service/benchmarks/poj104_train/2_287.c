#define NUM_ITER 15739

#include <header.h>

main_bench()
{
	int n;
	my_scanf("%d",&n);
	struct 
	{
		int num;
		char a[25];
	}book [999];
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d %s",&book[i].num,book[i].a);
	}
	int s[26]={0};
	for(i=0;i<=n-1;i++)
	{
		int len=strlen(book[i].a);
		for(j=0;j<len;j++)
		{
			s[book[i].a[j]-'A']++;
		}
	}
	int max=0;
	char name;
	for(i=0;i<=25;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
			name='A'+i;
		}
	}
	my_printf("%c\n",name);
	my_printf("%d\n",max);
	for(i=0;i<=n-1;i++)
	{
		int len=strlen(book[i].a);
		for(j=0;j<len;j++)
		{
			if(book[i].a[j]==name)
				my_printf("%d\n",book[i].num);
		}
	}




		
	
}
