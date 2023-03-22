#define NUM_ITER 65373

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int max,sed,t,j,r,m,c;
my_scanf("%d",&max);
my_scanf("%d",&sed);
my_scanf("%d",&c);
j=3;
while(j<=n){
	if(max<c){
	t=max;
	max=c;
	c=t;
	}
	if(sed<c){
	r=sed;
	sed=c;
	}
	j++;
	my_scanf("%d",&c);
	
}
if(max<sed){
m=max;
max=sed;
sed=m;
}
my_printf("%d\n%d\n",max,sed);
return 0;
}