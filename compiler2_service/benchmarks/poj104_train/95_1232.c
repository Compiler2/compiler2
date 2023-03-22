#include <header.h>

int main_bench()
{
	int h=0;
	char a[100],b[100],i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i]&&a[i]!=b[i]+32&&a[i]!=b[i]-32)
		{if(a[i]>96&&b[i]>96&&a[i]>b[i])
		h=2;
		else if(a[i]<96&&b[i]<96&&a[i]>b[i])
		h=2;
		else if(a[i]<96&&b[i]<96&&a[i]<b[i])
		h=1;
		else if(a[i]>96&&b[i]>96&&a[i]<b[i])
		h=1;
		else if(a[i]>96&&b[i]<96&&a[i]>(b[i]+32))
		h=2;
		else if(a[i]>96&&b[i]<96&&a[i]<(b[i]+32))
		h=1;
		else if(a[i]<96&&b[i]>96&&a[i]>(b[i]-32))
		h=2;
		else if(a[i]<96&&b[i]>96&&a[i]<(b[i]-32))
		h=1;
	}} 
	if(h==0)
		my_printf("=");
	else if(h==1)
		my_printf("<");
	else if(h==2)
		my_printf(">");
	return(0);
	}