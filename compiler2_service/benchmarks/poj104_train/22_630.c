#define NUM_ITER 100110

#include <header.h>


int main_bench()
{
    void trans(int *x,int *y);
    int a[300],i,j,n=0;
    char c[300];
    for (i=1;i<=300;i++)
    {my_scanf("%d",&a[i-1]);
     my_scanf("%c",&c[i-1]);
     n++;
     if (c[i-1]=='\n') break;
    }
    if(n==1) my_printf("No");
    else{
    for(i=1;i<=n-1;i++)
    {
       for(j=1;j<=n-i;j++)
       {
       if(a[j-1]<a[j])
       trans((a+j-1),(a+j));
       }
    }
    for(i=1;i<=n-1;i++)
    {
    if(a[i-1]>a[i]) {my_printf("%d",a[i]); break;}
    if(i==n-1) my_printf("No");
    }
    }
    
    
	
    return 0;
}
  void trans (int *x,int *y)
  {
      int z;
       z=*x;*x=*y;*y=z;
  }

