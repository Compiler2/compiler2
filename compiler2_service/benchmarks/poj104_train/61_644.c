#define NUM_ITER 58615

#include <header.h>

int main_bench(){
int n,a,sz[30],i,j,t,e;
i=1;
j=1;
sz[0]=1;
sz[1]=1;
for(t=2;t<30;t++){
	sz[t]=i+j;
	e=i;
	i=i+j;
	j=e;
}
my_scanf("%d",&n);
for(t=0;t<n;t++){
	my_scanf("%d",&a);
	my_printf("%d\n",sz[a-1]);
}
return 0;
}