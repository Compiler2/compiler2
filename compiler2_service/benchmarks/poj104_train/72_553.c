#define NUM_ITER 466

#include <header.h>

int main_bench(){
   int n,m,i,j,k,total=0,a[110][110];
   
   my_scanf("%d%d",&m,&n);

   for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         my_scanf("%d",&a[i][j]);
       }
   }

for(i=0;i<m;i++){
     for(j=0;j<n;j++){
        if(i==0){
          if(j==0){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]){
            my_printf("%d %d\n",i,j);
           }
          }
        if(j>0&&j<n-1){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]){
            my_printf("%d %d\n",i,j);
             }
           }

        if(j==n-1){
           if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]){
            my_printf("%d %d\n",i,j);
          }
        }}

       if(i==m-1){
          if(j==0){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]){
            my_printf("%d %d\n",i,j);
           }
          }
        if(j>0&&j<n-1){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]){
            my_printf("%d %d\n",i,j);
             }
           }

        if(j==n-1){
           if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]){
            my_printf("%d %d\n",i,j);
          }
        }
        }
        
        if(i>0&&i<m-1){
          if(j==0){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]){
            my_printf("%d %d\n",i,j);
           }
          }
        if(j>0&&j<n-1){
           if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]){
            my_printf("%d %d\n",i,j);
             }
           }

        if(j==n-1){
           if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]){
            my_printf("%d %d\n",i,j);
          }
        }
       }
}}


return 0;
}