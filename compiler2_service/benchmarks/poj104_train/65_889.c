#include <header.h>

int main_bench(){
    int n,a[200],b[200],i,k=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&a[i],&b[i]);
        if(a[i]!=2&&b[i]-a[i]==1){
            k++;
        }else if(a[i]==2&&b[i]==0){
            k++;
        }else if(b[i]!=2&&a[i]-b[i]==1){
            k--;
        }else if(b[i]==2&&a[i]==0){
            k--;
        }else if(a[i]==b[i]){
            k=k;
        }
    }
    if(k==0){
        my_printf("Tie");
    }else if(k<0){
        my_printf("B");
    }else{
        my_printf("A");
    }
    return 0;
}
