#define NUM_ITER 55833

#include <header.h>

int main_bench()
{
   int n,i,max,next,temp;
   my_scanf("%d",&n);
   int a[100];
   for(i=0;i<n;i++)
   { my_scanf("%d\n",&a[i]);
    }
   if(a[0]>a[1])
    {max=a[0];
     next=a[1];
     }
   else if(a[1]>a[0])
   {max=a[1];
    next=a[0];
    }
   for(i=2;i<n;i++)
   {if(a[i]>max)
      {temp=max;
      next=temp;
	  max=a[i];
      }
     else if(a[i]<max&&a[i]>next)
      next=a[i];
    }
    my_printf("%d\n%d",max,next);
    return 0;
}     