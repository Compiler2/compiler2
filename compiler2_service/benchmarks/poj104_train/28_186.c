#include <header.h>

int main_bench()
{
	char str[5000];
	int i,j=0,n=0;
	gets(str);
	for(i=0;str[i]!=0;i++,n++)
	{
		if(str[i]==' ')
		{
			
			if(n>0) 
			{
				if(j==0) {my_printf("%d",n);j=1;}
			    else my_printf(",%d",n);
			}
			n=-1;
		}
	}
	if(j==0) {my_printf("%d",n);j=1;}
	else my_printf(",%d",n);
}