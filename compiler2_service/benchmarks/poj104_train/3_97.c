#define NUM_ITER 61338

#include <header.h>

int main_bench()
{
	int a,b,c[1001],i,j,m=1;
	my_scanf("%d%d",&a,&b);
for(i=0;i<a;i++){
my_scanf("%d",&c[i]);
}
	for(i=0;i<a;i++){
		if(m==0) break;
for(j=0;j<a&&j!=i;j++){
	if(c[i]+c[j]==b) { my_printf("yes");
	m=0;
	break;
	}
	}}
	if(m==1) my_printf("no");
return 0;
}


