#include <header.h>

int main_bench(){
    int i,j,n,k;
    int s;
    int sz[1000];
    my_scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
                     my_scanf("%d",&sz[i]);
                     }
    for(i=0;i<n-1;i++){
                       for(j=i+1;j<=n-1;j++){
                                            if(sz[i]+sz[j]==k){
                                                  s=1;
                                                  break;
                                                  }
                                            else
                                                   s=0;
                                                   }
                       if(s==1){
                                  my_printf("yes");
                                  break;
                                  }
                       if(i==n-2&&s==0)  
                                my_printf("no");
                                }
                               
                                return 0;
}
                                                  
