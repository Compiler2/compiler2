#define NUM_ITER 522072

#include <header.h>

int main_bench()
{
	char s[100],w[100],p[100],t[100];
	int i,j,flag=1;
	my_scanf("%s",w);
	my_scanf("%s",s);
	my_scanf("%s",t);
	for(i=0;i<strlen(w);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			p[j]=w[i+j];
		}
		flag=1;
		for(j=0;j<strlen(s);j++)
		{
			if(p[j]!=s[j]) flag=0;
		}
		if(flag!=0)
		{
			for(j=0;j<strlen(s);j++)
			{
				w[i+j]=t[j];
			}
			break;
		}
	}
	my_printf("%s",w);
}