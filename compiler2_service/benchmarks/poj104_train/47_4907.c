#include <header.h>



int main_bench(){

int n,*m,i,j,tmp;
my_scanf("%d",&n);
m=(int *)malloc(sizeof(int)*n);

for(i=0;i<n;i++){
my_scanf("%d",m+i);
}
for(i=0,j=n-1;i<j;i++,j--){
tmp=m[i];
m[i]=m[j];
m[j]=tmp;
}
my_printf("%d",m[0]);
for(i=1;i<n;i++){
my_printf(" %d",m[i]);
}
return 0;
}
