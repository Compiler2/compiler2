#define NUM_ITER 6943

#include <header.h>

main_bench()
{
	int i,n,l,j,k;
	char s[101]={'\0'};
	my_scanf("%d\n",&n);
	for(j=1;j<=n;j++)
	{
		int b[101]={0},c[123]={0};
		gets(s);
	l=strlen(s);
for(i=0;i<=l-1;i++)
	{
		b[i]=s[i];
}
for(i=0;i<=l-1;i++)
	for(k=97;k<=122;k++)
		if(b[i]==k)
			{
				c[k]=c[k]+1;
		}
		for(i=0;i<=l-1;i++)
			if(c[b[i]]==1)
				{
					break;
			}
			if(b[i]==0)
				my_printf("no\n");
			else
				my_printf("%c\n",s[i]);
				
	}
}
	