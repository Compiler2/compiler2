#define NUM_ITER 4740

#include <header.h>

int compare(int x,int y)
{
    if(x<=y)
    x=y+1;
    return x;
}
int main_bench()
{
      int i,n,r,a,j;
      my_scanf("%d",&n);
      int *p=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      my_scanf("%d",&p[i]);
      int *q=(int *)malloc(n*sizeof(int));
      
      for(j=n-1;j>=0;j--)
       {
         q[j]=1;
         for(r=n-1;r!=j;r--)
         {
           if(p[j]>=p[r])
           q[j]=compare(q[j],q[r]);
         }
         
       }
       int max;
       max=q[0]; 
      for(a=1;a<n;a++)
      {
        if(q[a]>max)
        max=q[a];
      }
      my_printf("%d",max);
      return 0;
}
