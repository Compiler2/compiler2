#define NUM_ITER 32669

#include <header.h>

int main_bench(){
int n,a[120],b[120];
int r=0,t=0,i;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);   
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
       t+=1;}
else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){
     r+=1;}
else {
   t+=0;
   r+=0;}
  }
if(t>r){
my_printf("A");}
else if(r>t){
my_printf("B");}
else {
my_printf("Tie");}
return 0;
}
