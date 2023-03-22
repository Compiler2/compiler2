#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int i,sz[100];
    for(i=0;i<n;i++){
       my_scanf("%d",&sz[i]);
    }
    int k=0,j=n-1,e;
    while((k<=n/2)&&(j>=n/2)){
         e=sz[k];
         sz[k]=sz[j];
         sz[j]=e;
         k++;
         j--;
         }
    for(i=0;i<n-1;i++){
       my_printf("%d ",sz[i]);
       }
    my_printf("%d",sz[n-1]);
    int a;
    my_scanf("%d",&a);
    return 0;
}
