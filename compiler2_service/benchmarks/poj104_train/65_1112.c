#define NUM_ITER 25236

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d\n",&n);
int sz[200],sb[200];
int i,j;
for(i=0;i<n;i++){
my_scanf("%d ",&sz[i]);
my_scanf("%d\n",&sb[i]);
}
int a=0,b=0,tie=0;
for(i=0;i<n;i++){
if(sz[i]==0&&sb[i]==1){
    a=a+1;}
else if(sz[i]==1&&sb[i]==2){
    a=a+1;}
else if(sz[i]==2&&sb[i]==0){
    a=a+1;}
else if(sz[i]==0&&sb[i]==2){
    b=b+1;}
else if(sz[i]==1&&sb[i]==0){
    b=b+1;}
else if(sz[i]==2&&sb[i]==1){
    b=b+1;}
else{tie=tie+1;}
}
if(a>b){my_printf("A");}
else if(a<b){my_printf("B");}
else{my_printf("Tie");}
return 0;
}




 

