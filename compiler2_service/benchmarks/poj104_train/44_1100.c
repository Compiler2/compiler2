#define NUM_ITER 388934

#include <header.h>

int reverse(int num)
{
   int b=0;
   int t=num;
   if(num>0) num=num;
   else if(num<0) num=-num;
   for(int i=1;num!=0;i++)
   {
      int a=num%10;
      num=(num-a)/10;
      b=b*10+a;
   }
   if(t==0||t==-0) b=0;
   else if(t>0) b=b;
   else if(t<0) b=-b;
   return b;
}
main_bench()
{
   int num[6];
   for(int i=0;i<6;i++)
   {
       my_scanf("%d",&num[i]);
   }
   for(int i=0;i<6;i++)
   {
       my_printf("%d\n",reverse(num[i]));
   }
   getchar();
   getchar();
   getchar();
}

