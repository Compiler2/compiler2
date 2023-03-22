#include <header.h>

int main_bench()
{
	char str[300];
	char sub[300];
	char re[300];
	my_scanf("%s%s%s",str,sub,re);
	int i,j,k,first;
	int len=strlen(str);
	int len1=strlen(sub);
	int len2=strlen(re);
	first=0;
	for(i=0;i<len;i++)
	{
		if(str[i]==sub[0])
		{
			for(k=i,j=0;j<len1;j++,k++)
			{
				if(str[k]!=sub[j])
				{
					break;
				}
			}
		}
		if(j==len1)
		{
			first=i;
			break;
		}
	}
	if(j!=len1)
	{
		my_printf("%s",str);
	}else
	{
		for(i=0;i<first;i++)
		{
			my_printf("%c",str[i]);
		}
		my_printf("%s",re);
		for(i=(first+len2);i<len;i++)
		{
			my_printf("%c",str[i]);
		}
	}
	return 0;
}