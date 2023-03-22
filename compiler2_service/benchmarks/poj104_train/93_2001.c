#include <header.h>

int main_bench()
{
 int n,i,f=0;
 my_scanf("%d",&n);
 for (i=3;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 my_printf("%d",i);
	 break;
	 }
 for (i=i+2;i<=7;i=i+2)
   if (n%i==0)
	 {
	 f=1;
	 my_printf(" %d",i);
	 }
 if (f==0)
   my_printf("n");
 my_printf("\n");
}