#define NUM_ITER 11587

#include <header.h>

main_bench()
{
	int e,n,x,i,j;
	char s[100002];
	my_scanf("%d",&n);
	for(e=0;e<n;e++)
	{
		my_scanf("%s",s);
		x=strlen(s);
		int *b=(int *)malloc(x*sizeof(int));
		for(i=0;i<x;i++)
		{
			b[i]=0;
			for(j=0;j<x;j++)
			{
				if(s[j]==s[i])
				{
					b[i]++;
				}
			}
		}
		for(i=0;i<x;i++)
		{
			if(b[i]==1)
			{
				my_printf("%c\n",s[i]);
				break;
			}
			if(b[i]!=1&&i==(x-1))
			{
				my_printf("no\n");
			}
		}
	}
}