#include <header.h>

    int main_bench(){
    int n,i,k,j;
    my_scanf("%d",&n);
    int a[n],c[n];
    for(i=0;i<n;i++){
    my_scanf("%d",&a[i]);
}
    int b[21];
    b[0]=0;
    b[1]=b[2]=1;
    for(i=3;i<21;i++){
       b[i]=b[i-1]+b[i-2];
       }
    for(i=0;i<n;i++){
       k=a[i];
       c[i]=b[k];
       }
    for(i=0;i<n;i++){
    my_printf("%d\n",c[i]);
}
    my_scanf("%d",&k);
    return 0;
}
