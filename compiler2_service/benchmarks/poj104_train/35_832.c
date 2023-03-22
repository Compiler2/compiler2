#define NUM_ITER 465

#include <header.h>

int main_bench()
{ 
   int m,n;
   my_scanf("%d,%d",&m,&n);
   int i,j;
   int a[m][n];
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
            my_scanf("%d",&a[i][j]);
       }
   }
   int b[m],c[n];
   int s=0;
   for(i=0;i<m;i++){
        b[i]=a[i][0];
        for(j=1;j<n;j++){
              if(a[i][j]>b[i]){
                   b[i]=a[i][j];
              }
       }
   }   
   for(j=0;j<n;j++){
        c[j]=a[0][j];
        for(i=1;i<m;i++){
              if(a[i][j]<c[j]){
                   c[j]=a[i][j];
              }
        }
   }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
            if(a[i][j]==b[i]&&a[i][j]==c[j]){
                 my_printf("%d+%d",i,j);
                 s+=1;
             }
       }
   }
   if(s==0){
       my_printf("No");
   }
   return 0;
}