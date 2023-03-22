#define NUM_ITER 539

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char a,b;
	my_scanf("%c", &a);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			my_scanf("%c",&a);
			 if(a=='A')
			 {
				 b='T';
				my_printf("%c",b);
			 }
			 if(a=='T')
			 {
				 b='A';
				my_printf("%c",b);
			 }
			 if(a=='G')
			 {
				 b='C';
				my_printf("%c",b);
			 }
			 if(a=='C')
			 {
				 b='G';
				my_printf("%c",b);
			 }
			 if(a=='\n')
			 {
				 my_printf("\n");
				 break;
			 }
		}
	}
	return 0;
}