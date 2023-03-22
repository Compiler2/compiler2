#define NUM_ITER 570

#include <header.h>

int main_bench(){
    int m,n,a[100][100],i,j,s=0;
    my_scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                    my_scanf("%d",&a[i][j]);
                    }
            }
    for(int k=0;k<(m+1)/2&&k<(n+1)/2;k++){
            for(j=k;j<n-k;j++){
                               s++;
                               if(s==m*n)
                                 my_printf("%d",a[k][j]); 
                               else if(s<m*n)
                                 my_printf("%d\n",a[k][j]);
                               }
            for(i=k+1;i<m-k;i++){
                                 s++;
                                 if(s==m*n)
                                   my_printf("%d",a[i][n-k-1]);
                                 else if(s<m*n)
                                   my_printf("%d\n",a[i][n-k-1]);
                                 }
            for(j=n-k-2;j>k-1;j--){
                                 s++;
                                 if(s==m*n)
                                   my_printf("%d",a[m-k-1][j]);
                                 else if(s<m*n)
                                   my_printf("%d\n",a[m-k-1][j]);
                                 }
            for(i=m-k-2;i>k;i--){
                                 s++;
                                 if(s==m*n)
                                   my_printf("%d",a[i][k]);
                                 else if(s<m*n)
                                   my_printf("%d\n",a[i][k]);
                                 }
            } 
    return 0;
}