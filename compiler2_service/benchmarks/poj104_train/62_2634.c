#include <header.h>

int main_bench()
{
	char a[10000];
	int n,i,j,k;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		if((a[i]==' ')&&(a[i-1]==' '))
		{
			continue;
		}
		else 
		{
			my_printf("%c",a[i]);
		}
	}


	
	
	
	return 0;
}