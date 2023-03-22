#include <header.h>

int main_bench()
{
	char a[200][40];
	int len[200],i=0,n;
    leap:my_scanf("%s",a[i]);
	len[i]=strlen(a[i]);
	i++;
	if(getchar()==' ') goto leap;
	n=i;
	for(i=0;i<n-1;i++) my_printf("%d,",len[i]);
	my_printf("%d",len[n-1]);
}