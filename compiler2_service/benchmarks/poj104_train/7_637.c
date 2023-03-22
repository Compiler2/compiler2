#include <header.h>

int main_bench()
{
	char s[257],z[200],h[200],t[100];
	int lens,lenz,lenh,i,j,sum,r,q=0,p=0;
	gets(s);
	gets(z);
	gets(h);
	lens=strlen(s);
	lenz=strlen(z);
	lenh=strlen(h);
	for(i=0;i<lens;i++)
	{
		sum=0;
		for(j=0;j<lenz;j++)
		{
			if(s[i+j]==z[j])
			{
				sum++;
			}
			else
			break;
		}
		if(sum==lenz)
		{
			r=i;
			q=1;
			break;
		}
	}
	if(q==1)
	{
		for(i=0;i<r;i++)
			my_printf("%c",s[i]);
		my_printf("%s",h);
		for(i=r+sum;i<lens;i++)
			my_printf("%c",s[i]);
	}
	else if(q==0)
		my_printf("%s",s);
	return 0;
}
