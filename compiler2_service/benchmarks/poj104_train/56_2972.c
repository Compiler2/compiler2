#define NUM_ITER 1000302

#include <header.h>

           
void print(int n)
{
      int p=n;int i;
      if(p/10!=0)
      {
         for(i=0;p/10!=0;i++)
         {
                         int temp=p/10;
                         p=p-10*temp;
         }
         my_printf("%d",p);
         n=n/10;
         print(n);
      }
      else
      my_printf("%d",n);
}
     


main_bench()
{
      int number,i;
      my_scanf("%d",&number);
      print(number);
    }

