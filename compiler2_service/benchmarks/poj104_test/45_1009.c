#include <header.h>

int main_bench()
{
	char a[51],b[51];
	int i,m=0;
	my_scanf("%s%s",a,b);
	for(i=0;;i++)
	{
		if(b[i]=='\0'||a[m]=='\0') break;
		if(a[m]!=b[i]) 
		{
			m=0;
			continue;
		}
		m++;
	}
	my_printf("%d",i-m);
	return 0;
}
	
