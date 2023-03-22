#define NUM_ITER 1534497

#include <header.h>


int main_bench()
{
	char str[100];
	char *p=str,*a[100];
	int i,j,k;
	gets(p);
	for(i=0,j=1;*(p+i)!='\0';i++)
	{
		if(*(p+i)==' ')
		{	a[j]=p+(i+1);
		    *(p+i)='\0';
		    j++;
		}
		a[0]=p+0;
	}
	for(k=j-1;k>0;k--)
		my_printf("%s ",a[k]);
	my_printf("%s",a[0]);
	
}