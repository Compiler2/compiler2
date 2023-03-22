#define NUM_ITER 35656

#include <header.h>

int main_bench(){
int A[200],b=0,a=0,B[200],c=0;
int i,n;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&A[i],&B[i]);
if(A[i]-B[i]==0){
c++;
}else if(A[i]-B[i]==1){
b++;
}else if(A[i]-B[i]==-1){
a++;
}else if(A[i]-B[i]==2){
a++;
}else if(A[i]-B[i]==-2){
b++;
}
}
if(a>b){
my_printf("A");
}else if(a==b){
my_printf("Tie");
}else if(a<b){
my_printf("B");
}
return 0;
}