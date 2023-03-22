#define NUM_ITER 60857

#include <header.h>

int main_bench()
{
   int n,k,i,j,a[1000],l=0;
   my_scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
      my_scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]+a[j]==k){l=1;break;}
        }
       if(l==1)break;
    }
       if(l==1){my_printf("yes\n");}
       if(l==0){my_printf("no\n");}
     
    return 0;
}