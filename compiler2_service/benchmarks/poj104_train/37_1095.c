#include <header.h>

int main_bench()
{
	int t;my_scanf("%d",&t);
	int i;char a[100000];
	for(i=0;i<t;i++)
	{
		my_scanf("%s",a);
		int zimu[26]={0};
		int k,len;int cache;
		len=strlen(a);
		for(k=0;k<len;k++)
		{
			cache=a[k]-'a';
			zimu[cache]=zimu[cache]+1;
		}
		for(k=0;k<len;k++)
		{
			if(zimu[a[k]-'a']==1)
			{
				my_printf("%c\n",a[k]);
				break;
			}
		}
		if(k==len)
		{my_printf("no\n");
		}
	}
	return 0;
}
