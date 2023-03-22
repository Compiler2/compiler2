#define NUM_ITER 1184928

#include <header.h>

int main_bench()
{
	char a[85],b[85];
	int i=0,k=0;
	gets(a);
	gets(b);
	while(a[i]!=0&&b[i]!=0)
	{
		if(a[i]>='a')a[i]=a[i]-'a'+'A';
		if(b[i]>='a')b[i]=b[i]-'a'+'A';
	    if(a[i]>b[i]){my_printf(">"); k=1;break;}
	    if(a[i]<b[i]){my_printf("<");k=1;break;}
		i++;
	} 
	if(k==0)my_printf("=");
	return 0;
}