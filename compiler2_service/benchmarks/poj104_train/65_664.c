#define NUM_ITER 34453

#include <header.h>

int main_bench()
{
int i,n,p,q;
int a[200],b[200];
my_scanf("%d\n",&n);
p=0;
q=0;
for(i=0;i<n;i++){
my_scanf("%d%d\n",&a[i],&b[i]);
if(a[i]==b[i]+1){
q=q+1;}else if(a[i]==b[i]+2){
p=p+1;}else if(a[i]==b[i]-1){
p=p+1;}else if(a[i]==b[i]-2){
q=q+1;}
}
if(p>q){
my_printf("A");}
else if(p==q){
my_printf("Tie");}
else if(p<q){
my_printf("B");}
return 0;
}