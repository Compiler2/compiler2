#include <header.h>

int main_bench()
{
      int reverse(int num);
      int a[6],i;
      for(i=0;i<=5;i++)
      my_scanf("%d",&a[i]);
      for(i=0;i<=5;i++)
      {
                           if(i==0) 
                              my_printf("%d",reverse(a[i]));
                              else
                              my_printf("\n%d",reverse(a[i]));
                              }
      getchar();
      getchar();
}
int reverse(int num)
{
    int a=num,x,b=0;
    for(;a!=0;)
    {
           x=a%10;
           a=a/10;
           b=x+b*10;
         
     }
       return(b);
}
