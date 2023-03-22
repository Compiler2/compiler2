#define NUM_ITER 2436

#include <header.h>

int main_bench()
{
   int a[100],i,e,k;
   char id[100][10],p[10];
   int n;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
      my_scanf("%s%d",id[i],&a[i]);
   }
   for(k=1;k<=n;k++){
     for(i=n-1;i>k-1;i--){
        if(a[i]>a[i-1]&&a[i]>=60){
           e=a[i];
           a[i]=a[i-1];
           a[i-1]=e;
           strcpy(p,id[i]);
           strcpy(id[i],id[i-1]);
           strcpy(id[i-1],p);
        }
      }
   }
   for(i=0;i<n;i++){
      my_printf("%s\n",id[i]);
   }
 return  0;
}
           