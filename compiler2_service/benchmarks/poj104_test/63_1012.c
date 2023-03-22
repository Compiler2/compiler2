#include <header.h>

int main_bench()
{
      int x1,y1,x2,y2,i,h,j;
      my_scanf("%d %d",&x1,&y1);
      int* p=(int*)malloc(x1*y1*sizeof(int));
      for(i=0;i<(x1*y1);i++)
      {my_scanf("%d",&p[i]);}
       my_scanf("%d %d",&x2,&y2);
      int* q=(int*)malloc(x2*y2*sizeof(int));
      for(i=0;i<(x2*y2);i++)
      {my_scanf("%d",&q[i]);}
      int* m=(int*)malloc(x1*y2*sizeof(int));
      for(i=0;i<(x1*y2);i++)
      {m[i]=0;}
      
      for(h=0;h<x1;h++)
      {
          for(j=0;j<y2;j++)
          {
              if(j==(y2-1))
              {
              for(i=0;i<y1;i++)
              {m[h*y2+j]+=p[h*y1+i]*q[i*y2+j];}
               my_printf("%d",m[h*y2+j]);
              }
              else
              { 
                 for(i=0;i<y1;i++)
               {m[h*y2+j]+=p[h*y1+i]*q[i*y2+j];}
              my_printf("%d ",m[h*y2+j]);
               }
            
          }
          my_printf("\n");
      }
      
      getchar();
      getchar();
      free(p);free(q);free(m);
      
}
