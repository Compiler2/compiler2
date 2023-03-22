#include <header.h>

int main_bench()
{
	char str[256],sub[256],re[256];
	my_scanf("%s%s%s",str,sub,re);
	int l1,l2;
	l1=strlen(str);
	l2=strlen(sub);
	int i,j,m;
	for(i=0;i<l1;i++)
	{
		m=1;
		for(j=0;j<l2;j++)
		{
			if(str[i+j]!=sub[j])
			{
				m=2;
			}
		}
		if(m==1)
		{
			for(j=0;j<l2;j++)
			{
				str[i+j]=re[j];
			}
			break;
		}
	}
	my_printf("%s\n",str);
	return 0;
}