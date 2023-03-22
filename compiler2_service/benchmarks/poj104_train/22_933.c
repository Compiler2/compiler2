#define NUM_ITER 1402407

#include <header.h>

int main_bench()
{
	int a,A=0,B=0;
	char c;
	
	
    for(;;)
    {
       my_scanf("%d",&a);
       if(A<a)
	   {  B=A;
		   A=a;
	   }
	   if(a<A&&a>B)
		   B=a;
	   my_scanf("%c",&c);
	   if(c!=',')
		   break;  
	}

	if(B<A&&B!=0)
	my_printf("%d\n",B);
	else if(B==A||B==0)
		my_printf("No\n");
	return 0;
}