#define NUM_ITER 1313338

#include <header.h>


int main_bench()
{
	char s[101],a[101][101];
	int i,l,j=0,k=0;

	gets(s);

	l=strlen(s);

	for(i=0;i<l;i++)
		if(s[i]==' ')
		{	a[k][j]=0;
		    k++;
			j=0;
		}
		else
			a[k][j++]=s[i];


	a[k][j]=0;


	for(i=0;i<k;i++)
	  if(strlen(a[i]))
		my_printf("%s ",a[i]);
	my_printf("%s",a[k]);
	return 0;
}
