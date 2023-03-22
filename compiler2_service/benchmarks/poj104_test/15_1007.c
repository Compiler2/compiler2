#define NUM_ITER 663

#include <header.h>

int main_bench ()
{
 int n,j,k,b,c,x,y;
 b=c=0;
 my_scanf("%d",&n);
 int sz[n][n];
 for(j = 0; j <=n-1; j++)
 {
   for(k = 0; k <=n-1; k++)
     {
       my_scanf("%d",&sz[j][k]); 
       if(sz[j][k]==0)
       {
         x=j;
         y=k; }
                           }
                               }
 for(j = 0; j <= n-1; j++)
 {
   for(k = 0; k <=n-1; k++)
     {
       if(sz[j][k]==0)
       {
         b=j;
         c=k;
         break;     
        }
         }
     if(sz[b][c]==0)
     break;    
         }
   int m;
   m=(x-b-1)*(y-c-1);
   my_printf("%d",m);
   return 0;
}


					