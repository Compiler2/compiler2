#define NUM_ITER 38779

#include <header.h>

int main_bench()
{
   int n,x,y,i=1,k=0,l=0;
   my_scanf("%d",&n);
   while(i<=n)
   {
      my_scanf("%d%d",&x,&y);
      if(x>=90&&x<=140&&y>=60&&y<=90)
         k++;
      else
         k=0;
      if(k>l)
         l=k;
      i++;
   }
   my_printf("%d",l);
   my_scanf("%d",&n);
   return 0;
}