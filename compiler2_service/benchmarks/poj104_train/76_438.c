#include <header.h>

int main_bench()
{
    int n,i,k,t,e,p,q,s=0,a,b;
    my_scanf("%d",&n);
    struct point
    {
           int x,y;
    }
    points[50000];
    for(i=0;i<n;i++)
    {
           my_scanf("%d%d",&a,&b);
           points[i].x=a;
           points[i].y=b;
    }
    for(k=1;k<=n;k++)
    {
           for(i=0;i<n-k;i++)
           {
                   if(points[i].x>points[i+1].x)
                   {
                          t=points[i].x;
                          points[i].x=points[i+1].x;
                          points[i+1].x=t;
                          e=points[i].y;
                          points[i].y=points[i+1].y;
                          points[i+1].y=e;
                   }
           }
    }
    p=points[0].x;
    for(i=0;i<n;i++)
    {
            if(points[i].y>=points[i+1].x)
            {
                if(points[i].y>points[i+1].y)
                {
                     points[i+1].y=points[i].y;
                }
            }
            else
            {
                     s++;
            }
    }
    
    q=points[n-1].y;
    if(s==0)
    {
           my_printf("%d %d",p,q);
    }
    else
    {
           my_printf("no");
    }
  
    return 0 ;
}