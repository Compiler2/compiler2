#define NUM_ITER 1169

#include <header.h>

int f(int m,int n){
    int i,k=0;
    for(i=2;i<=n;i++)
    k=((m%i)+k)%i;
    return k;
}
int main_bench(){
int a[300][2],i;
for(i=0;i<300;i++){
my_scanf("%d%d",&a[i][0],&a[i][1]);
if(a[i][0]==0) break;
else my_printf("%d\n",f(a[i][1],a[i][0])+1);
}
return 0;
}
