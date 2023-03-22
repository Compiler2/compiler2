#define NUM_ITER 49038

#include <header.h>

int main_bench(){
  int n,a[100],i,j,t;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
  my_scanf("%d",&a[i]);
} 
  j=n-1;
  for(i=0;i<j;i++){
  t=a[i];
  a[i]=a[j];
a[j]=t;
 j--;
}
 for(i=0;i<n;i++){
if(i<n-1) my_printf("%d ",a[i]);
else my_printf("%d",a[i]);
}
return 0;
}