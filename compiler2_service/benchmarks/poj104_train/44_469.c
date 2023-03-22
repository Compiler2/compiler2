#define NUM_ITER 420444

#include <header.h>


int RevNum(int n);

int main_bench()
{
  int k,i;
  for(i=0;i<6;i++)
  {
      my_scanf("%d",&k);
      RevNum(k);
  }
     return 0;
}


int RevNum(int n)
{
   int s=0,j=0;
   if(n==0||-0)
   my_printf("0");
   else
   {
          if(n>0)
          {
              for(;n%10==0;)
            {
                n=n/10;
            }
            for(;n/10!=0;)
             {
              s=n%10;
              n=n/10;
              my_printf("%d",s);
             }
            my_printf("%d\n",n);
          }
           if(n<0)
           {
               n=-n;
               for(;n%10==0;)
                {
                n=n/10;
                if(0<n<10)
                n=-n;
                }
               for(;n/10!=0;)
                {
                 s=n%10;
                 n=n/10;
                 if(j==0)
                 my_printf("-");
                 my_printf("%d",s);
                 j++;
                }

            my_printf("%d\n",n);

           }

   }
   j=0;

return 0;
}
