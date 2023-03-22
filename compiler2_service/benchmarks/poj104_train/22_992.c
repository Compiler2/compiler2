#define NUM_ITER 1389636

#include <header.h>

int main_bench()
{
    int a[300],i=2,k,j=1,h=0;
    my_scanf("%d",&a[1]);
    while(my_scanf(",%d",&a[i])){j=j+1;i=i+1;}
    k=a[1];
    if(j==1)my_printf("No");
    if(j>1)
    {
      for(i=2;i<=j;i++){if(a[i]>k)k=a[i];}
      for(i=1;i<=j;i++){if(a[i]!=k&&a[i]>h)h=a[i];}
      if(h==0)my_printf("No");
      else my_printf("%d",h);
    }
    return 0;
}


