#include <header.h>

int main_bench(){
int a[201],b[201],i,n,j=0,k=0;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
if((a[i]<b[i]&&b[i]-a[i]!=2)||a[i]-b[i]==2){
j++;}
if((a[i]>b[i]&&a[i]-b[i]!=2)||b[i]-a[i]==2){
k++;}
}
if(j>k){
my_printf("A");}
if(j<k){
my_printf("B");}
if(j==k){
my_printf("Tie");}
return 0;
}