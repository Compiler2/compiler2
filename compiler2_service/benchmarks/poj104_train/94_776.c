#define NUM_ITER 16018

#include <header.h>

int main_bench(){
	int a[500]={0},b[500]={0};
	int n,i,m=0,j,temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);
	if(a[i]%2==1){
	b[m]=a[i];
	m++;
	}}
	for(j=1;j<m;j++){
for(i=0;i<m-j;i++){
if(b[i]>b[i+1]){
temp=b[i];
b[i]=b[i+1];
b[i+1]=temp;
}
}
}  
	my_printf("%d",b[0]);
	for(j=1;j<m;j++){
	my_printf(",%d",b[j]);
	}
		return 0;
}