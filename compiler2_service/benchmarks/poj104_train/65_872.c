#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    int a,b,c,m,j=0,k=0;
    for(int i=0;i<n;i++){
        my_scanf("%d %d",&a,&b);
        c=a-b;
        if(c==-1||c==2){
            j++;
        }
        else if(c==1||c==-2){
            k++;
        }
    }
    m=j-k;
    if(m==0){
        my_printf("Tie");
    }
    else if(m<0){
        my_printf("B");
    }
    else if(m>0){
        my_printf("A");
    }
    return 0;
}
