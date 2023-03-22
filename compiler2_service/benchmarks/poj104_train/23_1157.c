#define NUM_ITER 1046020

#include <header.h>

int main_bench()
{
char str[100];
int i,j,a;
gets(str);
a=strlen(str); 
for(i=strlen(str)-1;i>=0;i--)
   {
	if(str[i]==' ')
	{for(j=i+1;j<a;j++)
	 my_printf("%c",str[j]);
	 my_printf(" ");
	 a=i;
	}
   }
for(i=0;i<strlen(str);i++)
if(str[i]==' ')break;
for(j=0;j<i;j++)
my_printf("%c",str[j]);
}