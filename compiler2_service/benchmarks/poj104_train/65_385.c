#define NUM_ITER 35315

#include <header.h>




main_bench()
{  int a[200],b[200];
   int s=0;
   int n;
   my_scanf("%d",&n);
   for(int i=0;i<n;i++){my_scanf("%d %d",&a[i],&b[i]);
                        if(a[i]==b[i]){s=s;}
                        if(a[i]==0&&b[i]==1){s++;}
                        if(a[i]==0&&b[i]==2){s--;}
                        if(a[i]==1&&b[i]==2){s++;}
                        if(a[i]==1&&b[i]==0){s--;}
                        if(a[i]==2&&b[i]==0){s++;}
                        if(a[i]==2&&b[i]==1){s--;}}
      
      if(s>0){my_printf("A");} 
      if(s==0){my_printf("Tie");}
      if(s<0){my_printf("B");}  
      }
