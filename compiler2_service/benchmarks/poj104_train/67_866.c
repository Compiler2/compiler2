#define NUM_ITER 27738

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int i,j,l,m,a[99],z[99];
float q,w;
n=n-1;
my_scanf("%d%d",&l,&m);
q=1.0*m/l;
for(i=0;i<n;i++){
my_scanf("%d%d",&l,&m);
w=1.0*m/l;
if(w>=q+0.05){
my_printf("better\n");}
else if(w<=q-0.05){
my_printf("worse\n");}
else{
my_printf("same\n");}

}
return 0;} 

