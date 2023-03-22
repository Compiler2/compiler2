#define NUM_ITER 56099

#include <header.h>

int main_bench()
{
    int n,m,i,j,a[1001],t,w,e;
    my_scanf("%d%d",&n,&m);
    t=0;
    for (i=0;i<=n-1;i++)
      my_scanf("%d",&a[i]);
      for (i=0;i<=n-1;i++)
        {
          for (j=i;j<=n-1;j++)
            if (a[i]+a[j]==m)
                {  t=1;  break;}            
          if (t==1) break;
        }
           if (t==1)  my_printf("yes");  else  my_printf("no"); 
         
           
return 0;      
}



