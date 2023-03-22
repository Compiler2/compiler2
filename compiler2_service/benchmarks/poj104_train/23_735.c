#define NUM_ITER 1216088

#include <header.h>

int main_bench()
{
    char str[100];
	int n,i,a,j;
	gets(str);
	n=strlen(str);
	a=n-1;
	for(i=n-1;i>0;i--)
		if(str[i]==' ') 
		{
			for(j=i+1;j<=a;j++)
				my_printf("%c",str[j]);
			    my_printf("%c",str[i]);
			a=i-1;
		}
	for(i=0;i<a+1;i++)
		my_printf("%c",str[i]);
}