#define NUM_ITER 194802

#include <header.h>

int main_bench()
{
	char c[200]={'\0'},c1[100]={'\0'},c2[100]={'\0'};
	int a,b,d,e=0,f=0,g,j;
	gets(c);
	for (a=0;a<100;a++)
	{
		if (c[a]==' ')
		{
			break;
		}
		else
		{
			c1[a]=c[a];
		}
	}
	for (b=0;b<100;b++)
	{
		c2[b]=c[a+1+b];
	}
	g=strlen(c1);
	j=strlen(c2);
	if (g!=j)
	{
		my_printf("NO\n");
		goto end;
	}
	for (a=0;a<g;a++)
	{ 
		e=0;
		for (b=0;b<j;b++)
		{
			if (c1[a]==c2[b])
			{
				e++;
				c2[b]=' ';
				break;
			}
		}
		if (e==0)
		{
			my_printf("NO\n");
			goto end;
		}
	}
	if (a==g)
	{
		my_printf("YES\n");
	}
end:;
}

