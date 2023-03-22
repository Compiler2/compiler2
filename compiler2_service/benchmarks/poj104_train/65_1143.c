#define NUM_ITER 32026

#include <header.h>


int main_bench(){
int i,n;
int a=0,b=0;
my_scanf("%d",&n);
int sz[800];
for(i=1;i<=n;i++){
my_scanf("%d %d",&(sz[0]),&(sz[1]));

if(sz[0]==sz[1]){a+=0;b+=0;}
else if(sz[0]!=sz[1]){
if(sz[0]==0&&sz[1]==1){a++;}
else if(sz[0]==1&&sz[1]==2){a++;}
else if(sz[0]==2&&sz[1]==0){a++;}
else if(sz[0]==1&&sz[1]==0){b++;}
else if(sz[0]==2&&sz[1]==1){b++;}
else if(sz[0]==0&&sz[1]==2){b++;}}}
if(a>b){my_printf("A");}
else if(a<b){my_printf("B");}
else if(a==b){my_printf("Tie");}
return 0;}

