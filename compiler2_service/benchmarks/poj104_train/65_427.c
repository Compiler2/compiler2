#define NUM_ITER 33475

#include <header.h>

int main_bench(){
int n,i,a=0,b=0;
int sz[200][2];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&sz[i][0],&sz[i][1]);
}
for(i=0;i<n;i++){
if(sz[i][0]==sz[i][1]){
a++;
b++;
}else if(sz[i][0]==0&&sz[i][1]==1){
a++;
}else if(sz[i][0]==0&&sz[i][1]==2){
b++;
}else if(sz[i][0]==1&&sz[i][1]==0){
b++;
}else if(sz[i][0]==1&&sz[i][1]==2){
a++;
}else if(sz[i][0]==2&&sz[i][1]==0){
a++;
}else{
b++;
}
}
if(a==b){
my_printf("Tie");
}else if(a>b){
my_printf("A");
}else{
my_printf("B");
}
return 0;
}