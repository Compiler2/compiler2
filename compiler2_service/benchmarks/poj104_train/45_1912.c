#define NUM_ITER 548596

#include <header.h>

int main_bench()
{
	char s[50],w[50],p[50];
	int i,j,flag=1;
	my_scanf("%s",s);
	my_scanf("%s",w);
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
			my_printf("%d",i);
			break;
		}
	}
}
