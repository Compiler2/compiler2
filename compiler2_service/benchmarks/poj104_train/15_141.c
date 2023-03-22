#include <header.h>

int main_bench(){
int n,i,j,c;
my_scanf("%d",&n);
int count=0;
int f[1000][1000];
for(i=0;i<n;i++){
for(j=0;j<n;j++){
my_scanf("%d",&f[i][j]);
if(f[i][j]==0) count=count+1;}
my_scanf("\n");}
c=(((count+4)/4)-2)*(((count+4)/4)-2);
my_printf("%d",c);
return 0;}
