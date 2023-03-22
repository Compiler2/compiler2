#define NUM_ITER 30812

#include <header.h>

int f(int x,int y)
{
    if(x==y)
    return 0;
    else if((x==0&&y==1)||(x==1&&y==2)||(x==2&&y==0))
    return 1;
    else
    return -1;
}

int main_bench()
{
   int n;
   int i;
   int a,b;
   int flag=0;
   my_scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
           my_scanf("%d %d\n",&a,&b);
           flag=flag+f(a,b);
   }
   if(flag>0)
   my_printf("A\n");
   else if(flag==0)
   my_printf("Tie\n");
   else
   my_printf("B\n");
       
}
