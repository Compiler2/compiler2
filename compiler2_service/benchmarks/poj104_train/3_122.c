#define NUM_ITER 7232

#include <header.h>


int main_bench()
{   int n,k,i,j,h;
    my_scanf("%d %d",&n,&k);
	int a[1000],b[1000],sum;
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]+a[j]==k&&i!=j){
				b[i] +=1;
				break;
			}
		}
	   if(j==n){
		   b[i]=0;
	   }
	}
	for(h=0;h<n;h++){
		sum +=b[h];
	}
	if(sum==0)
		my_printf("no\n");
	if(sum!=0)
		my_printf("yes\n");
				


	return 0;
}