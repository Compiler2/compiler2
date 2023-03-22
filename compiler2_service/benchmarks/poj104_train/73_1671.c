#define NUM_ITER 194186

#include <header.h>

int main_bench(){
int a[5][5];
int i,j,k,y,f,x;
k=0;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
my_scanf("%d",&(a[i][j]));
}
}
for(i=0;i<5;i++){
y=a[i][0];
x=0;
for(j=1;j<5;j++){
if(a[i][j]>y){
y=a[i][j];
x=j;
}
}
for(f=0;f<5;f++){
if(a[i][x]>a[f][x]){
k=1;
}
}
if(k==0){
my_printf("%d %d %d",i+1,x+1,a[i][x]);
break;
}
k=0;
if(i==4){
my_printf("not found");
}
}
return 0;
}
