#define NUM_ITER 55794

#include <header.h>

int main_bench()
{
  int n,i,max=0,emax=0;
  int a[100];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
   my_scanf("%d",&a[i]);
 if(a[i]>max){
   max=a[i];
  }
  }
  for(i=0;i<n;i++){
    if(a[i]!=max){
         if(a[i]>emax){
             emax=a[i];
           }
       }
    }
 my_printf("%d\n%d\n",max,emax);
 return 0;
} 
  
   