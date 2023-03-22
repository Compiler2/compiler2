#include <header.h>

int main_bench()
{
	char a[1000];
	int i,t,length,b[26],flag,count=0;
	my_scanf("%d",&t);
	while(t--)
	{
	my_scanf("%s",a);
	length=strlen(a);
	for(i=0;i<26;i++)
	{
		b[i]=0;
	}
	for(i=0;i<length;i++)
	{
		flag=a[i]-'a';
		b[flag]++;
	}
	for(i=0;i<length;i++)
	{
		if(b[a[i]-'a']==1)
		{
			my_printf("%c\n",a[i]);
			count=1;
			break;
		}
	}
	if(count==0)
		my_printf("no\n");
	count=0;
	}
}