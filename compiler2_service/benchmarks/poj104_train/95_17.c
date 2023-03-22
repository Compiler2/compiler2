#define NUM_ITER 1033859

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100];
	int la,lb,s,i,t;
	gets (a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	if(la<lb)
	{
		for(i=0;i<la;i++)
		{
			c[i]=a[i];
		}
		s=la;
		la=lb;
		lb=s;
		strcpy(a,b);
		strcpy(b,c);
	}
	for (i=0;i<lb;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		if(b[i]>='A'&&b[i]<='Z')
		{
			b[i]=b[i]+32;
		}
		if(a[i]>b[i])
		{
			my_printf(">");
			break;
		}
		if(a[i]<b[i])
		{
			my_printf("<");
			break;
		}
		
	}
	for(i=0;i<lb;i++)
	{
		if(a[i]==b[i])
		{
			t++;
		}
		if(t==lb)
		{
			my_printf("=");
		}
	}

}
