#define NUM_ITER 7871

#include <header.h>


int main_bench()
{
	int n,k,a[1000],t,j,p=0,i;
	my_scanf("%d%d",&n,&k);
	my_scanf("%d",&a[0]);
	
	
	for(i=1;i<n;i++){
    t=i;
		my_scanf("%d",&a[i]);

for(j=0;j<t;j++){
	if(a[j]==k-a[i]){
        p=1;
		break;}
}
	}
if(p==0)my_printf("no");
if(p==1)my_printf("yes");	
	
	
	
	
	
	return 0;
}

