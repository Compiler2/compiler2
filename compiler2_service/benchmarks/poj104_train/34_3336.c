#include <header.h>

int n;
void js(int n)
{
   my_printf("%d*3+1=%d\n",n,n*3+1);
   
}
void os(int n)
{
	my_printf("%d/2=%d\n",n,n/2);
	
}
int main_bench()
{
	my_scanf("%d",&n);
    while(n!=1)
	{
		if(n%2==1) 
		{
			js(n);
            n=n*3+1;
		}
	else if(n%2==0) 
			{
		    os(n);
			n=n/2;
	}
	}my_printf("End");

}