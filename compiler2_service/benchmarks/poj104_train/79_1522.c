#define NUM_ITER 2175

#include <header.h>

int main_bench()
{
   int n,m,s,i;
   
   my_scanf("%d %d",&n,&m);
   while(n!=0)
   {
            
              s=0;
              for(i=2;i<=n;i++)
              s=(s+m)%i;
              my_printf("%d\n",s+1);
              my_scanf("%d %d",&n,&m);
              }
              

   
             getchar();getchar();getchar();
             }
