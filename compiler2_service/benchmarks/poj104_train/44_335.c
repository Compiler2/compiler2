#define NUM_ITER 403694

#include <header.h>

int transfer(int i)
	{
		int b=0,t,r;
		b+=i%10;
		for(r=0;r<5;r++)
		{
			i/=10;
			if(i!=0)
			b=(b*10)+i%10;
			else break;
			}
		return b;
		}
int main_bench()
		{
			int i,j,n=6;
			while(n>0)
			{
				my_scanf("%d",&i);
				my_printf("%d\n",transfer(i));				
				n--;
				}
			return 0;
		
			}