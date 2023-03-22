#include <header.h>

int main_bench(){
int n,A=0;
my_scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){A++;}
else if(a[i]!=b[i]){A--;}
}
if(A>0){my_printf("A");}
if(A<0){my_printf("B");}
if(A==0){my_printf("Tie");}
return 0;
}