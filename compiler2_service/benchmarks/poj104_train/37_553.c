#include <header.h>

int main_bench()
{
	char str[100001];
	int i,t,len,j,h,m,c;
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",str);
		len=strlen(str);
		for(j=0,c=0;j<len;j++)
		{
			m=0;
			for(h=0;h<len;h++)
			{
				if(str[j]==str[h]&&h!=j)
				{m++;}
			}
			if(m==0)
			{my_printf("%c\n",str[j]);
			break;}
			else
			{c++;}
		}
		if(c==len)
		{
			my_printf("no\n");
		}
	}
	return 0;
}
