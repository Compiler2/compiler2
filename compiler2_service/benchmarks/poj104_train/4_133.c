#define NUM_ITER 540

#include <header.h>


int sz[100][100];

int main_bench () {
    
    int n, m, i, j;
    
    my_scanf ("%d %d", &n, &m);
    
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            my_scanf ("%d", &sz[i][j]);
            }
        }
    
    i=0; 
    j=0;
    while (1){
            my_printf("%d\n", sz[i][j]);
            if (i==(n-1)&&j==(m-1)){break;}
            if (j==0){
                      j=i+1;
                      i=0;
                      }
            else {
                 i++;
                 j--;
                 }
                 
            if (i>=n){
                      j=i+j+1;
                      i=0;
                      }
            if (j>=m){
                      i=j+1-m;
                      j=m-1;
                      }
            }
    
    return 0;
    }
