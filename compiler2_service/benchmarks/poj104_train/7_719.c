#define NUM_ITER 867604

#include <header.h>

int main_bench()
{
	int i=0,j=0,k=0,m=0,n,l;
	char s[256],a[100],b[100];
	gets(s);gets(a);gets(b);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==a[0])
		{
			k=i;l=i;
			for(j=0;j<strlen(a);j++,k++)
			{
				if(a[j]!=s[k])
				{break;}
			}
			if(j==strlen(a))
			{m=1;
				break;
			}
		}
	}
	if(m==1)
	{
		for(i=0;i<l;i++)
		{my_printf("%c",s[i]);}
		my_printf("%s",b);
		for(n=l+strlen(a);n<strlen(s);n++)
		{my_printf("%c",s[n]);}
	}
	else if(m==0){my_printf("%s",s);}
	return 0;
}