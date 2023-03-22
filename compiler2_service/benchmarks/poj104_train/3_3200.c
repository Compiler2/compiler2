#define NUM_ITER 50150

#include <header.h>

int main_bench()
{
    int n,k;
    my_scanf("%d%d",&n,&k);
    int a[1000];
    int i,j;
    int b,count=0;
    b=n*(n-1);
    for(i=1;i<=n;i++)
    {my_scanf("%d",&a[i-1]);}
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
              if(i!=j){
                  if(a[i-1]+a[j-1]==k)
                      {my_printf("yes");
                       break;}
                   else{count++;}
              }
          }
         if(a[i-1]+a[j-1]==k){break;}
    }
    if(count==b)
    {my_printf("no");}
    return 0;
}