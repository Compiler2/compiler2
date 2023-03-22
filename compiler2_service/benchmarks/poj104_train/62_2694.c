#define NUM_ITER 1144329

#include <header.h>

int main_bench()
{
    char a[100];
    gets(a);
    int l=strlen(a);
    for(int i=0;i<=l-1;i++)
    {
    	if((a[i]==' ')&&(a[i+1]==' ')) 
     	{   i++;
     	    while((a[i]==' ')&&(a[i+1]==' ')){i++;}
        	my_printf("%c",a[i]);
		}
     	else 
     	{
			my_printf("%c",a[i]);
		}
    }
    int y=0;
	my_scanf("%d",&y);
    return 0;
}
 
