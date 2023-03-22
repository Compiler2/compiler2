#include <header.h>


int main_bench()
{
	char a[200],b[200];
	int len,num=0;
	int j,i;
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))
		my_printf("NO");
	else 
	{
		len=strlen(a);
		for(j=0;j<len;j++)
		{
			for(i=0;i<len;i++)
			{
				if(a[j]==b[i])
				{
					a[j]='0';
					b[i]='0';
				}
			}
		}
		for(i=0;i<len;i++)
		{
			if(a[i]=='0')
				num++;
		}
		if(num==len)
			my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}
