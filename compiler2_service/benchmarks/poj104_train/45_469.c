#include <header.h>

int main_bench()
{
	char s[50],w[50],*p;
	int i,k;
	my_scanf("%s %s",s,w);
	for(p=w;p<(w+strlen(w));p++)
	{
		k=0;
		for(i=0;i<strlen(s);i++)
			if(*(p+i)!=s[i])
				k=1;
		if(k==0)
		{
			my_printf("%d\n",p-w);
			break;
		}
	}
}