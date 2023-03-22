#define NUM_ITER 143291

#include <header.h>


int main_bench()
{
  void jiaogu(int n);
  int m;
  my_scanf("%d",&m);
  jiaogu(m);
}

void jiaogu(int n)
{
   void shizi(int x);
   if(n==1)
   my_printf("End");
   if(n%2==0)
   {shizi(n); 
    jiaogu(n/2);}
   if(n%2!=0&&n!=1)
   {shizi(n);
   jiaogu(n*3+1);}
   
}
void shizi(int x)
{  int y;
   if(x%2==0)
   {y=x/2; 
   my_printf("%d/2=%d\n",x,y);}
  if(x%2!=0)
  {y=(x*3+1);
   my_printf("%d*3+1=%d\n",x,y);}
}
