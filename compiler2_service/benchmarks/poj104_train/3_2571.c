#define NUM_ITER 2933

#include <header.h>

int main_bench(){
int i,n,m,a[1000],b[1000],d[1000],c=0;
my_scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	b[i]=a[i];
}
for(int t=0;t<n;t++){
	for(i=0;i<n;i++){
	if(t!=i)
	d[t]=a[t]+b[i];
	if(d[t]==m)
	c=c+1; 
}
}
if(c==0)
my_printf("no");
else 
my_printf("yes"); 
return 0;
}