#define NUM_ITER 4534

#include <header.h>

int main_bench(){
	int k,a[1000],i,j,n,t;
		my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);}
	for(i=0,t=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]+a[j]==k)
			{break;}}
		if(j!=n&&i!=j)
			t++;
}
	if(t>0)
	my_printf("yes"); 
	else
		my_printf("no"); 

 	return 0;
	}
