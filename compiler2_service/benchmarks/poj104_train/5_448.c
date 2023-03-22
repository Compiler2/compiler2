#define NUM_ITER 901023

#include <header.h>

int main_bench()
{
	int i , lena , lenb ;
	double r ,same = 0,j=0;
	char a[10000];
	char b[10000];
	my_scanf("%lf",&r);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	lena = strlen (a);
	lenb = strlen (b);
	if (lena != lenb )
	{
		my_printf("error");
	}
	else
	{
		for(i=0 ; i <=lena-1 ; i++)
		{
			if( a[i] == b[i])
			{
				same++;
			}
			else if(a[i]!='A'&& a[i]!='T'&&a[i]!='C'&& a[i]!='G')
			{
				my_printf("error");
				j=1;
				break;
			}
			else if(b[i]!='A'&& b[i]!='T'&& b[i]!='C'&& b[i]!='G')
			{
				my_printf("error");
				j=1;
				break;
			}
		}
	}
	if(j==0 && lena==lenb)
	{
		if((same/lena) > r)
		{
			my_printf( "yes" );
		}
		else
		{
			my_printf( "no" );
		}

	}
     return 0;

}
