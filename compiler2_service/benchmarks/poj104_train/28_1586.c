#define NUM_ITER 1122424

#include <header.h>

int main_bench()
{
	char a[6000],f[300][20];
	int b,d=0,i,e=0,s[100];
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='\0'||a[i]==' ')
		{
			if(a[i+1]!=' ')
			{
				d=0;
				e++;
			}
		}
		else
		{
			f[e][d]=a[i];
			d++;
			f[e][d]='\0';
		}
	}
	for(i=0;i<=e;i++)
	{
		s[i]=strlen(f[i]);
	}
	for(i=0;i<e;i++)
	{
		my_printf("%d,",s[i]);
	}
	my_printf("%d\n",s[e]);
	return 0;
}
