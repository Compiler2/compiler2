#define NUM_ITER 1444290

#include <header.h>

int main_bench()
{
	char str1[101],str2[101],*p1,*p2,*temp;
	
	gets(str1);
	p1=str1;
	p2=str2;
	while (*(p1+1)!='\0')
	{ 
		temp=p1+1;
		*p2=*p1+*temp;
		p1=p1+1;
		p2=p2+1;
	}
	temp=str1;
	*p2=*p1+*temp;
	temp=str2;
	while (temp<=p2)
	{
		my_printf("%c",*temp);
		temp=temp+1;
	}
	my_printf("\n");
}