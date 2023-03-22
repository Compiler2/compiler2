#include <header.h>

int main_bench(){
int y,i,j,k,m,n,u[100][100],s,d,x;
my_scanf("%d",&k);

for(y=1;y<=k;y++){my_scanf("%d%d",&m,&n);for(i=0;i<m;i++){
for(j=0;j<n;j++){my_scanf("%d",&u[i][j]);}}
s=0;for(i=0;i<m;i++){
for(j=0;j<n;j++){s+=u[i][j];}}
d=0;for(i=1;i<m-1;i++){for(j=1;j<n-1;j++){d+=u[i][j];}}
x=s-d;my_printf("%d\n",x);}

return 0;
 
} 
