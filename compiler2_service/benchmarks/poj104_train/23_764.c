#define NUM_ITER 1115457

#include <header.h>


int main_bench()
{
	int l,i,j=0,k=0;
	char s[100],a[100],*p,*q;
	gets(s);
	l=strlen(s);
	p=s;q=a;
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==' ')
			s[i]=0;
	}
	for(i=l-1;i>=0;i--)
	{
		if(s[i]==0)
		{
			strcpy(q+j,p+i+1);
			j=l-i;
		}
		if(i==0)
		{
			strcpy(q+j,p);
		}
	}
	for(i=0;i<l;i++)
		if(a[i]==0)
			a[i]=' ';
	my_printf("%s\n",a);
}
