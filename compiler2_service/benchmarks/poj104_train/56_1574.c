#include <header.h>

main_bench()
{
   int s,a,b,c,d,e,l=0;
   my_scanf("%d",&s);
   if(s) {l++;a=s%10;s/=10;}
   if(s) {l++;b=s%10;s/=10;}
   if(s) {l++;c=s%10;s/=10;}
   if(s) {l++;d=s%10;s/=10;}
   if(s) {l++;e=s%10;s/=10;}
   switch(l)
   {
   case 5:my_printf("%d%d%d%d%d",a,b,c,d,e);
	      break;
   case 4:my_printf("%d%d%d%d",a,b,c,d);
	      break;
   case 3:my_printf("%d%d%d",a,b,c);
	      break;
   case 2:my_printf("%d%d",a,b);
	      break;
   case 1:my_printf("%d",a);
	      break;
   }
 }