#define NUM_ITER 679

#include <header.h>

int m[1000][1000];
int main_bench(){
int i,j,n,k=0,g,l,p,o;
my_scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
my_scanf("%d",&m[i][j]);
if(m[i][j]==0){
if(m[i-1][j]!=0&&m[i][j-1]!=0){
p=i;
o=j;}
	g=i;
	l=j;}
}}
my_printf("%d\n",(l-o-1)*(g-p-1));
return 0;
}