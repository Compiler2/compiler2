#include <header.h>

int main_bench()
{
 int n,a,max,i,max2;
 my_scanf("%d",&n);
 i=1;
    while(i<=n){
  my_scanf("%d",&a);
  if(a>max){
   max2=max;
   max=a;
  }
  else if(a>max2){
   max2=a;
    }
        i=i+1;
 }
 my_printf("%d\n%d\n",max,max2);
 return 0;
}
