#include <header.h>

int main_bench(){
    int n,k,i,j,x;
    int a,b;
    int s=0;
    int sz[50001],szz[50001];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                      my_scanf("%d%d",&sz[i],&szz[i]);
                      }
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if(sz[i]>sz[i+1]){
                                                           a=sz[i];
                                                           sz[i]=sz[i+1];
                                                           sz[i+1]=a;
                                                           b=szz[i];
                                                           szz[i]=szz[i+1];
                                                           szz[i+1]=b;
                                                           }
                                                           }
                                                           }
     for(i=0;i<n-1;i++){
                        if(sz[i+1]<=szz[i])
                           s+=1;
                        else {
                             for(j=0;j<i;j++){
                                              if(sz[i+1]<=szz[j])
                                                  s+=1;
                                                  }
                                                  }
                           }
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if(szz[i]>szz[i+1]){
                                                             x=szz[i];
                                                             szz[i]=szz[i+1];
                                                             szz[i+1]=x;
                                                             }
                                                             }
                                                             }
    if(s==n-1){
             my_printf("%d %d",sz[0],szz[n-1]);
             }
    else{
         my_printf("no");
         }
   
    
     return 0;
     }               
                                                           
