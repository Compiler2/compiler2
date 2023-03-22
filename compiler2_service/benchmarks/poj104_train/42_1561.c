#include <header.h>

int main_bench(){
    int n,sz[100000],k,i,j,num;
    num=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++) my_scanf("%d",&sz[i]);
    my_scanf("%d",&k);
    for(i=0;i<n;i++){
                     if(sz[i]==k){
                                  for(j=i;j<n-1;j++){
                                                   sz[j]=sz[j+1];
                                                   }
                                  num++;
                                  i--;
                                  n--;
                     
                                  }
                     }
    for(i=0;i<n-1;i++) my_printf("%d ",sz[i]);
    my_printf("%d",sz[n-1]);


    return 0;
}
    