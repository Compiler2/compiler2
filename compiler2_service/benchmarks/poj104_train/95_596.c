#define NUM_ITER 1099368

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,p;
	gets(a);
	gets(b);
	p=strlen(a);
	for(i=0;i<=p-1;i++)
	{
		if((a[i]>'A'||a[i]=='A') && (a[i]<'Z'||a[i]=='Z'))
			a[i]=a[i]+32;
		if((b[i]>'A'||b[i]=='A') && (b[i]<'Z'||b[i]=='Z'))
			b[i]=b[i]+32;
	}
	for(i=0;i<=p-1;i++)
	{
		if(a[i]>b[i])
		{
			my_printf(">");break;
		}
		if(a[i]<b[i])
		{
			my_printf("<");break;
		}
	}
	if(i==p)
		my_printf("=");
}
