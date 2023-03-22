#include <header.h>

int main_bench(){
    int n,i,j,s=0,t=0,r=0,h=1,a[10000];
    my_scanf("%d",&n);
    for(i=2;i<=n;i++){
                      for(j=2;j<i;j++){
                                       if(i%j!=0)
                                          continue;
                                       else{
                                            s=s+1;
                                            break;
                                            }
                                       }
                      if(j==i){
                         a[i]=i;
                         t=t+1;
                         }
                      if(s==n-1)
                         my_printf("empty");
                      }
    r=t;
    for(i=2;i<=n;i++){
                      if(a[i+2]-a[i]==2){
                                         if(h==1){
                         my_printf("%d %d",a[i],a[i+2]);
                         t--;
                         h++;
                         continue;
                         }
                         if(h!=1){
                              my_printf("\n%d %d",a[i],a[i+2]);
                              t--;
                         }
                      }
                      }
    if(t==r)
       my_printf("empty");
return 0;
}