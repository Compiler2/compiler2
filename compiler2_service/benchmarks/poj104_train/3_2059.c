#include <header.h>

int main_bench(){
    int n,k;
    my_scanf("%d %d",&n,&k);
    int SZ[n];
    for(int m=0;m<n;m++){
        my_scanf("%d",&SZ[m]);
        }
    for(int i=0;i<n-1;i++){
            int I=0,J=0;
        for(int j=1;j<n-1-i;j++){
                
            if(SZ[i]+SZ[i+j]==k){
               my_printf("yes");
               I=i,J=j;
               break;
               }
               }
               if(SZ[I]+SZ[I+J]==k){
               
               break;}
               
            
        
    if(i==n-2){
       my_printf("no");
       }
       }
    return 0;
}    