#include <header.h>

int main_bench(){
    int n,i,j,k=0,m;
    my_scanf("%d",&n);
    int sz[300],e[300];
    for(i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(i=0;i<n-1;i++){
         for(j=i+1;j<n;j++){
              if(sz[i]==sz[j]){
                      sz[j]=0;
              }
         }
    }
    for(i=0;i<n;i++){
         if(sz[i]!=0){
              e[k]=sz[i];
              k++;
          }
    }
    m=k;
    for(k=0;k<m-1;k++){
         my_printf("%d,",e[k]);
    }
    my_printf("%d",e[m-1]);
return 0;
}