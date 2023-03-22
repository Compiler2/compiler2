#define NUM_ITER 36934

#include <header.h>

int main_bench()
{
    int n,i,j,k,a=0,b=0;
    my_scanf("%d",&n);
    int fight[n][2];
    for(i=0;i<n;i++)
    {
   my_scanf("%d%d",&fight[i][0],&fight[i][1]);}
   for(i=0;i<n;i++)
   {
           if(fight[i][0]==fight[i][1]);
           else  
           {
                if(fight[i][0]==1)
                {
                                  if(fight[i][1]==2)a++;
                                  else b++;
                                  } 
              if(fight[i][0]==0)
              {
                                if(fight[i][1]==1)a++;
                                else b++;
                                }
           if(fight[i][0]==2)
           {
                             if(fight[i][1]==0)a++;
                             else b++;
                             }
       
            }      
       }
       if(a>b)my_printf("A\n");
       if(a<b)my_printf("B\n");
       if(a==b)my_printf("Tie\n");
                  
                    
    
}
