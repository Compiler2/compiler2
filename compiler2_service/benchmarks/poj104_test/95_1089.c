#define NUM_ITER 425953

#include <header.h>

int main_bench()
{
	int i;
	char a[80]={0},b[80]={0};
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if(a[i]>64&&a[i]<91) a[i]=a[i]+32;
		if(b[i]>64&&b[i]<91) b[i]=b[i]+32;
	}
	for(i=0;i<80;i++)
	{
		if(a[i]>b[i])
		{
			my_printf(">");
			break;
		}
		else if(a[i]<b[i])
		{
			my_printf("<");
			break;
		}
		if(i==79) my_printf("=");
	}
}