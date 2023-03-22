#define NUM_ITER 5099

#include <header.h>

int main_bench(){
    int N,a[500],t,i,b[500],p;
    my_scanf("%d",&N);
    for(i=0;i<N;i++){
    my_scanf("%d ",&a[i]);
}
for(i=0;i<N;i++){
if(a[i]%2==1){
b[i]=a[i];}
else{b[i]=0;}}
for(i=0;i<N;i++){
for(p=0;p<N-i;p++){
if(b[p]>b[p+1]){
t=b[p+1];
b[p+1]=b[p];
b[p]=t;}}}
for(i=0;i<N;i++){
if(b[i]>0){
my_printf("%d,",b[i]);}}
my_printf("%d",b[N]);
return 0;
}