#define NUM_ITER 1126343

#include <header.h>

int main_bench()
{
	int i,j;
	char a[101];
	
	gets(a);
	for(i=strlen(a)-1;i>0;i--)
	{
		if(a[i]==' ')
		{
                      for(j=i+1;a[j]!=' '&&a[j]!='\0';j++)
		        my_printf("%c",a[j]);
		    if(j!=i+1)
		        my_printf(" ");
		}
          }
          for(j=i;a[j]!=' '&&a[j]!='\0';j++)
	     my_printf("%c",a[j]);
}