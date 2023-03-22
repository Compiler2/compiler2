#include <header.h>

int main_bench()
{
int n, i, max, sec, a[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
max=a[0];
sec=a[0];
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
  }
else if(a[i]<max&&a[i]>sec){
sec=a[i];
   }
}
my_printf("%d\n%d",max,sec);
return 0;
}