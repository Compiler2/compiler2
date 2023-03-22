#include <header.h>

int main_bench(){
    int n,l[100000],k,c=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
            my_scanf("%d",&l[i]);
            }
    my_scanf("%d",&k);
    for(int i=0;i<n-c;i++){
            if(l[i]==k){
              for(int j=i;j<n-c;j++){
                      l[j]=l[j+1];
                      }
              c++;
              i--;
              }
            }
    for(int i=0;i<n-c;i++){
            if(i==n-c-1)
            my_printf("%d",l[i]);
            else
            my_printf("%d ",l[i]);
            }
    return 0;
}