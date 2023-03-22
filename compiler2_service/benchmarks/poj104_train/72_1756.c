#define NUM_ITER 512

#include <header.h>

int main_bench(){
    int m,n; 
    my_scanf("%d %d",&m,&n);
    int sd[m+2][n+2];
    int i,j;
    for(i=0;i<m+2;i++){
       for(j=0;j<n+2;j++){
         sd[i][j]=0;
                          }
                       }
    for(i=1;i<m+1;i++){
       for(j=1;j<n+1;j++){
          my_scanf("%d",&sd[i][j]);
                        }
                     }
     for(i=1;i<m+1;i++){
       for(j=1;j<n+1;j++){
         if(sd[i][j]>=sd[i+1][j]&&sd[i][j]>=sd[i-1][j]&&sd[i][j]>=sd[i][j+1]&&sd[i][j]>=sd[i][j-1]){
            my_printf("%d %d\n",i-1,j-1);
                                                                                                    }
                       }
                     }
     return 0;
    
    
    }