#define NUM_ITER 25926

#include <header.h>

int main_bench()
{  int m,a=3,b,i,j;
my_scanf("%d",&m);
loop:while(a<=m/2)
{i=2;
	 j=2;
	while(i<=a-1)
	{   if(a%i==0) 
	{a++;
	goto loop;
	}
	else  i++;
	}
b=m-a;
    while(j<=b-1)
		{   if(b%j==0) 
	{a++;
	goto loop;
	}
	else  j++;
	}
my_printf("%d %d\n",a,b);
a++;
	}
return 0;
}