#define NUM_ITER 254547

#include <header.h>


int main_bench()
{int m;
my_scanf("%d",&m);
if (m==1)
my_printf("End");
else
{
    while(m!=1)
	{  if((m-2*(m/2))!=0)
	{my_printf("%d*3+1=%d\n",m,m*3+1);
     m=m*3+1;
	}
       if((m-2*(m/2))==0)
	   {
        my_printf("%d/2=%d\n",m,m/2);
          m=m/2;
	   }
	}
	my_printf("End");
}


	return 0;
}
