#define NUM_ITER 799735

#include <header.h>

main_bench()
{
     int xx,yy;
     my_scanf("%d %d",&xx,&yy);
     int x[10],y[10];
     x[0]=xx;
     y[0]=yy;
     int i,j;
     for(i=1;x[i-1]!=1;i++)
     {    
         int q=x[i-1]/2; 
         x[i]=q;
         } 
     i--;
     for(j=1;y[j-1]!=1;j++)
     {    int p=y[j-1]/2; 
          y[j]=p;}
     j--;
     int bl=0;
     
     
     for(int a=0;a<=i;a++)
     {
            if(bl==1) break;
            for(int b=0;b<=j;b++)
            if(x[a]==y[b]) 
            {
               my_printf("%d",x[a]);
               bl=1;
               break;              
            }
     }
     getchar();
     getchar();
      
      
} 
