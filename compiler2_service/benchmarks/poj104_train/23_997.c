#define NUM_ITER 573898

#include <header.h>

int main_bench()
{
	char a[100],*p,b[100][100]={'\0'},(*q)[100];
	int i=0,j=0,n;
	gets(a);
	q=b;
	for(p=a;*p!='\0';p++)
	{
		if(*p!=' ')
		{
			*(*(q+i)+j)=*p;
			j++;
		}
		else
		{
			i++;
			j=0;
		}
	}
	n=i;
	for(i=n;i>0;i--)
	{
		for(j=0;*(*(q+i)+j)!='\0';j++)
		    my_printf("%c",*(*(q+i)+j));
        my_printf(" ");
	}
	for(j=0;*(*q+j)!='\0';j++)
	    my_printf("%c",*(*q+j));
	my_printf("\n");
}