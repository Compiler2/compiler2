#define NUM_ITER 570

#include <header.h>

int main_bench(){
	int sz1[1000];
	int h,j=0,k=0,i,n,mj,a=-1,b=-1,c=0,d;
	my_scanf("%d",&n);
	for(h=0;h<n;h++){
		k=0;
	for(i=0;i<n;i++){
		if(a<0){
		c++;}
	my_scanf("%d",&sz1[i]);
	if(sz1[i]==0){
     a=i;b=h;}
    }
	for(i=0;i<n;i++){
	sz1[i]=0;}
}
	d=c%n;
	mj=(b-d)*(a-d);
	my_printf("%d\n",mj);
	return 0;
}