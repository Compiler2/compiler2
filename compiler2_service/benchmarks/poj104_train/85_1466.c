#define NUM_ITER 5616

#include <header.h>

int main_bench()
{
	int n,i=1,j=0,l,c=0;
	char s[100]={'\0'};
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=99;j++)
			s[j]='\0';
		c=0;
		my_scanf("%s",s);
		l=strlen(s);
		if((s[0]>='0')&&(s[0]<='9'))
			my_printf("no\n");
		else
		{
			for(j=0;j<=l-1;j++)
			{
				if(((s[j]>='0')&&(s[j]<='9'))||((s[j]>='a')&&(s[j]<='z'))||((s[j]>='A')&&(s[j]<='Z'))||(s[j]=='_'))
					c+=1;
			}
			if(c==l)
				my_printf("yes\n");
			else
				my_printf("no\n");
		}
	}
}