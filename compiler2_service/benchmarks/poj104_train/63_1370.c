#define NUM_ITER 52

#include <header.h>


main_bench()
{
      int x1,y1,x2,y2,i,j,x,y,sum,t;
      my_scanf("%d %d",&x1,&y1);
      int a[x1][y1];
      
      for(i=0;i<=x1-1;i++)
          for(j=0;j<=y1-1;j++)
          {my_scanf("%d",&a[i][j]);

}       
       my_scanf("%d %d",&x2,&y2);
      int b[x2][y2];
       for(i=0;i<=x2-1;i++)
          for(j=0;j<=y2-1;j++)
          {my_scanf("%d",&b[i][j]);
         
          }
       int c[x1][y2];
       
       for(i=0;i<x1;i++)
          for(j=0;j<y2;j++)
          {
                sum=0;
                for(t=0;t<x2;t++)          
                     {  
                                           
                                           sum=sum+(a[i][t])*(b[t][j]);
                     
                   
                  
                     }     
                c[i][j]=sum;
                
          }
         for(i=0;i<x1;i++)
          for(j=0;j<y2;j++)
            {
             if(j==y2-1)
             my_printf("%d\n",c[i][j]);  
             else
             my_printf("%d ",c[i][j]);
            }
            
            
            
          
      }