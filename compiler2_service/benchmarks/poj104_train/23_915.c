#include <header.h>

int main_bench()
{
	char a[100],*p;
	int m,n,i,j;
	gets(a);
	m=strlen(a);
	p=a;
	j=m;
	for(i=m-1;i>-1;i--)
		if(*(p+i)==' ')
		{
			my_printf("%s",p+i+1);
			my_printf(" ");
			*(p+i)='\0';
			j=i;
		}
		for(i=0;i<j;i++)
			my_printf("%c",*(p+i));
}