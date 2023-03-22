#define NUM_ITER 55628

#include <header.h>

int main_bench(){
int n,i,j,a[10000];
double b[4]={0};
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]<=18){
b[0]=b[0]+1;}
if(a[i]>18&&a[i]<=35){
b[1]=b[1]+1;}
if(a[i]>35&&a[i]<=60){
b[2]=b[2]+1;}
if(a[i]>60){
b[3]=b[3]+1;}
}
for(i=0;i<4;i++){
b[i]=(100.0*b[i])/n;
}
my_printf("1-18: %.2lf%%\n",b[0]);
my_printf("19-35: %.2lf%%\n",b[1]);
my_printf("36-60: %.2lf%%\n",b[2]);
my_printf("Over60: %.2lf%%\n",b[3]);
return 0;
}