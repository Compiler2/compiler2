#define NUM_ITER 39438

#include <header.h>

int main_bench(){
int n,i,j=0,k=0;
int a[200],b[200];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if(a[i]==b[i]){
j=j;
k=k;
}
else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
j++;
}
else 
k++;
}
if(j==k){
my_printf("Tie");
}else if(j>k){
my_printf("A");
}else my_printf("B");
return 0;
}