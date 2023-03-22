#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int kw,ks,j;
	char *p;
	int q,r;
	my_scanf("%s %s",s,w);
	ks=strlen(s),kw=strlen(w);
	for(p=w+kw-1;p>=w;p--)
	{
		r=0;
		for(j=0;j<ks;j++)
		{
			if(w[p-w-j]!=s[ks-1-j]) r=1;
		}
		if(r==0) q=p-w-ks+1;
	}
	 my_printf("%d",q);
}

