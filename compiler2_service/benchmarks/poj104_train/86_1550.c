#include <header.h>

int main_bench(){
int i,huai,n,j,sz[100],k,r;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&huai);
if(huai==0&&i==n-1){
	my_printf("60");
	break;
}
if(huai==0&&i!=n-1){
	my_printf("60\n");
	continue;
}
for(j=0;j<huai;j++){
my_scanf("%d",&sz[j]);
}
for(j=0;j<huai;j++){
k=sz[j]+3*(j+1);
if(k>=60) break;
}
if(j==huai) r=60-3*huai;
if(k>=60&&k<=63) r=sz[j];
if(k>63) r=60-3*j;
if(j==n-1){
	my_printf("%d",r);}else{
	my_printf("%d\n",r);
	}
}
	return 0;
}