#include <header.h>

int main_bench()
{
	char a[100];
	int b[100];
	int i,j,k;
	gets(a);
    j=0;
	for(i=0;;i++)
	{
		if(a[i]==' ')
		{
			b[j]=i;
			j++;
		}
		if(a[i]=='\0')
		{
			b[j]=i;
			break;
		}
	}
	
		
    for(i=j;i>0;i--)
	{
		for(k=b[i-1]+1;k<b[i];k++)
		{
			my_printf("%c",a[k]);
            
		}
		my_printf(" ");
	}
	for(i=0;i<b[0];i++)
		my_printf("%c",a[i]);
	return 0;
}