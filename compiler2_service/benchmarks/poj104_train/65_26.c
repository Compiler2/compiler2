#define NUM_ITER 28052

#include <header.h>

int main_bench(){
int n;
my_scanf("%d\n",&n);
int sz[n][2];
for(int i=0;i<n;i++){
for(int j=0;j<2;j++){
my_scanf("%d",&sz[i][j]);
}
}
int sum1=0;
int sum2=0;
for(int i=0;i<n;i++){
if(sz[i][0]-sz[i][1]==-1||sz[i][0]-sz[i][1]==2){
sum1++;
}
else if(sz[i][0]-sz[i][1]==1||sz[i][0]-sz[i][1]==-2){
sum2++;
}
}
if(sum1>sum2){
my_printf("A");
}
else if(sum1<sum2){
my_printf("B");}
else {
my_printf("Tie");
}
return 0;
}
