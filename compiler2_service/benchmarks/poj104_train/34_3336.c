#include <header.h>

int n;
void js(int n)
{
   printf("%d*3+1=%d\n",n,n*3+1);
   
}
void os(int n)
{
	printf("%d/2=%d\n",n,n/2);
	
}
int main_bench()
{
	scanf("%d",&n);
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
	}printf("End");

}