#define NUM_ITER 566686

#include <header.h>

int main_bench()
{
   int m,n,i;
   char a[5][10],(*p)[10];
   p=a;
   for(i=0;i<5;i++)
   {
	   gets(a[i]);
   }
   my_scanf("%d%d",&n,&m);
   if(m<0||m>4||n<0||n>4)
	   my_printf("error");
   else
	   for(i=0;i<5;i++)
	   {
	      if(i==m)
			  puts(*(p+n));
		  else if(i==n)
			  puts(*(p+m));
		  else
			  puts(*(p+i));
	   }
}