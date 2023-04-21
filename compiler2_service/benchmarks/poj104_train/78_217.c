#define NUM_ITER 1115791

#include <header.h>

int main_bench()
{int z,q,s,l,a,b;

for(z=1;z<6;z++)
{
  for(s=1;s<6;s++)
  {
	  l=7-s;q=7-z;
         if((z+l>q+s)&&(z+s<q))
	 
		 {	a=s;b=z;}	}
}		 
  

l=6-a;q=6-b;
   my_printf("l %d\n",l*10);
my_printf("q %d\n",q*10);
my_printf("z %d\n",b*10);
my_printf("s %d",a*10);

	return 0;
}
