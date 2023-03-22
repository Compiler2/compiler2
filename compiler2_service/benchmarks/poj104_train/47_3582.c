#include <header.h>

void NX();
int n;
int sz[100],nx[100];
int main_bench(){
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    NX();
    for(int i=0;i<n;i++){
        if(i<n-1){
        my_printf("%d ",nx[i]);
        }else{
            my_printf("%d",nx[i]);
        }
    }
    return 0;
}
void NX(){
    int j;
    j=0;
    for(int i=n-1;i>=0;i--){
        nx[j]=sz[i];
        j++;
    }
}


