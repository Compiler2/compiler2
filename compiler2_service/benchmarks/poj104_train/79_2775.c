#define NUM_ITER 295

#include <header.h>

int main_bench(){
    int n,m,i,s,k,p;
    my_scanf("%d %d\n",&n,&m);
    while(n!=0&&m!=0){
        int a[n];
        for(p=0;p<n;p++){
            a[p]=1;
        }
        s=0;
        k=0;
        i=0;
        while(k<n-1){
            s+=a[i];
            if(s==m){
                a[i]=0;
                s=0;
                k++;
            }
            i++;
            if(i>=n){
                i=i-n;
            }
        }
        for(i=0;i<n;i++){
            if(a[i]==1){
                i=i+1;
                my_printf("%d\n",i);
            }
        }  
        my_scanf("%d %d\n",&n,&m);
    }
    return 0;
}