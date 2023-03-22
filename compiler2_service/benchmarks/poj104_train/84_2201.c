#include <header.h>


int main_bench()
{
 int i=0;
 int n,tmp=0;
 int a=0,b=0;
 my_scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   my_scanf("%d",&tmp);
   if (tmp>a)
   {
     b=a;
     a=tmp;
   }
   else 
   {
     if (tmp>b)
       b=tmp;
   }
 }
  


my_printf("%d\n",a);
my_printf("%d",b);
	return 0;
}
