#define NUM_ITER 40

#include <header.h>

int main_bench()
{
      int n,i,j,w,x,y;
      my_scanf("%d",&n);
      int a[100000],b[100000]; 
      for (i=0;i<100000;i++)
      {
          my_scanf("%d %d",&a[i],&b[i]);
          if(a[i]==0 && b[i]==0)
          {
                     w=i+1;
                     break;
          }
      }
      for (j=0;j<n;j++)
      {
          x=0;
          y=0;
          for(i=0;i<w;i++)
          {
                    if(a[i]==j)
                    x++;
                    if(b[i]==j)
                    y++;
          }
          if(j==0)
          {
                  if(x==1 && y==n)
                  {
                               my_printf("%d",j);
                               break;
                  }
                  
          }
          else
          {
              if(x==0 && y==n-1)
             {
                  my_printf("%d",j);
                  break;
             }    
          }
      }
      if(j==n)
      my_printf("NOT FOUND");
      getchar();
      getchar();
}