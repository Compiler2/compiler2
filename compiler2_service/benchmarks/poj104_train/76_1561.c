#define NUM_ITER 1616

#include <header.h>

int main_bench()
{
int a[10000],b[10000],c[10001];
int i,n,m,s,p,q=1;
for(i=0;i<10001;i++){
	c[i]=1;
}
my_scanf("%d",&n);
for(i=0;i<n;i++){
    my_scanf("%d%d",&a[i],&b[i]);
	for(m=a[i];m<b[i];m++){
	c[m]=0;
	}
}
for(i=0;i<10001;i++){
	if(c[i]==0){
	s=i;
	break;
	}
}
for(i=10000;i>=0;i--){
    if(c[i]==0){
		p=i+1;
	break;
	}
}
for(i=s;i<p;i++){
	if(c[i]!=0){
     q=0;
	break;
	}
}
if(q==0){
	my_printf("no");
}else{
    my_printf("%d %d",s,p);
}

		return 0;
}