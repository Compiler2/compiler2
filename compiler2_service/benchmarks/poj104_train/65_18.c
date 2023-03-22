#define NUM_ITER 39891

#include <header.h>

int main_bench(){
 int n,i;
 my_scanf("%d",&n);
 int a[200],b[200];
 int h=0,k=0;
 for(i=0;i<n;i++){
   my_scanf("%d%d",&a[i],&b[i]);
   if(a[i]==0&&b[i]==1) h++;
   if(a[i]==0&&b[i]==2) k++;
   if(a[i]==1&&b[i]==2) h++;
   if(a[i]==1&&b[i]==0) k++;
   if(a[i]==2&&b[i]==0) h++;
   if(a[i]==2&&b[i]==1) k++;

 }

   if(h>k) my_printf("A\n");
   if(h<k) my_printf("B\n");
   if(h==k) my_printf("Tie\n");


return 0;
}
