#include <header.h>

int main_bench(){
    int n,k,i,a[2000],j,sum=0;
    my_scanf("%d %d",&n,&k);
    my_scanf("%d",&a[1]);
    for(i=2;i<=n;i++){
    my_scanf("%d",&a[i]);for(j=1;j<i;j++)
    {if((a[j]+a[i])==k){sum+=1;}}
     }
    if(sum==0)my_printf("no");
    else my_printf("yes");
    return 0;
}
    
    