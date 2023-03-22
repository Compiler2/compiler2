#define NUM_ITER 29

#include <header.h>

main_bench()
{
      int x1,y1,m,n;
   
      my_scanf("%d %d",&x1,&y1);
      int a[x1][y1];
      for(m=0;m<x1;m++)
      {
                   for(n=0;n<y1;n++)
                   {
                                    my_scanf("%d",&a[m][n]);
                   }
      }
      int x2,y2,p,q;
      
      my_scanf("%d %d",&x2,&y2);
      int b[x2][y2];
      for(p=0;p<x2;p++)
      {
                   for(q=0;q<y2;q++)
                   {
                                    my_scanf("%d",&b[p][q]);
                   }
      }
      int c[x1][y2];
      int d,e,f;
      int r,t;
      for(r=0;r<x1;r++)
      {
                       for(t=0;t<y2;t++)
                       {
                                        c[r][t]=0;
                       }
      }
      for(d=0;d<x1;d++)
      {
                       for(e=0;e<y2;e++)
                       {
                                        
                                        for(f=0;f<y1;f++)        
                                        { 
                                                     c[d][e]+=a[d][f]*b[f][e];
                                        }
                                      
                       }
      }
      int g,h;
      for(g=0;g<x1;g++)
      {
                       for(h=0;h<y2;h++)
                       {
                                         if(h<y2-1)
                                        my_printf("%d ",c[g][h]);
                                        else
                                        my_printf("%d\n",c[g][h]);                       }
      }
}