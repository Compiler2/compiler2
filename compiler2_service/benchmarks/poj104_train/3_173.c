#define NUM_ITER 54533

#include <header.h>


int main_bench()
{
	int n, k, a[1000], b=0, i;
	my_scanf("%d %d\n", &n, &k);
	for(i=0; i<n; i++){
		my_scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j]==k){
				b=1;
				my_printf("yes\n");
				break;
			}
		}
		if(b==1){
			break;}
	}
	if(b==0){
		my_printf("no\n");}



	
 
	return 0;
}
