#define NUM_ITER 699216

#include <header.h>

int main_bench()
{
	int i,j,d,e,f,k;
	char a[256],b[256],c[256];
	gets(a);
	my_scanf("\n");
	gets(b);
	my_scanf("\n");
	gets(c);
	d=strlen(a);
	e=strlen(b);
	f=strlen(c);
	for(i=0;i<d;i++)
	{
		if(b[0]==a[i])
		{
			k=i;
			for(j=0;j<e;j++,k++)
				if(b[j]!=a[k]) break;
				if(j<e) continue;
				else break;
		}
		else continue;
	}
	if(i<d)
	{
		for(j=i+e;j<(d-i-e);j++)
			a[f+j-e]=a[j];
		for(j=i;j<(i+f);j++)
			a[j]=c[j-i];
		my_printf("%s\n",a);
	}
	else my_printf("%s\n",a);
}
