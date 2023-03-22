#include <header.h>

int main_bench()
{
    int n,i,j,p=0;
    int a[100000];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&a[i]);
                     if(i==0){my_printf("%d",a[0]);}
                     else{
                     for(j=0;j<i;j++){
                                      if(a[i]==a[j]){p+=1;}
                                      }
                     if(p==0){my_printf(" %d",a[i]);}
                     p=0;
                     }
                     }
    return 0;
}        
      