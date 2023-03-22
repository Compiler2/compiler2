#include <header.h>

 int main_bench()
 {
   int n,x=0,y=0,i;
   my_scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
	 int a,b;
     my_scanf("%d%d",&a,&b);
	   if(a==b) {x++;y++;}
	   else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)) x++;
	   else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2)) y++;
   }
      if(x>y) my_printf("A");
      else if(x<y) my_printf("B");
      else if(x==y) my_printf("Tie");
    return 0;
 }
