#define NUM_ITER 1155186

#include <header.h>

main_bench()
{
	char s[2000];
	int i,max=0,min=100,a,b,l,k=0;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=' '&&s[i]!=',')
		{
			k++;
		}
		if(i==l-1||(s[i]==' '||s[i]==','))
		{
			if(k!=0)
			{
				if(k>max)
				{
					max=k;
					if(i==l-1) a=i;
					else a=i-1;
				}
				if(k<min)
				{
					min=k;
					if(i==l-1) b=i;
					else b=i-1;
				}
			k=0;
			}
		}
	}
	for(i=a-max+1;i<=a;i++) my_printf("%c",s[i]);
	my_printf("\n");
	for(i=b-min+1;i<=b;i++) my_printf("%c",s[i]);
}