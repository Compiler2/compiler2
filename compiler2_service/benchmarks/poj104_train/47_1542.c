#define NUM_ITER 49587

#include <header.h>

int main_bench()
{
	int n,i,e,j;
	 
	my_scanf("%d",&n);
    int a[100],b[100];
	
	for(i=0;i<n;i++){
my_scanf("%d",&(a[i]));
		
	}
	for(j=0;j<n;j++){
   b[j]=a[n-j-1];
	}
	for(e=0;e<n;e++){
		if(e==n-1){
			my_printf("%d",b[e]);
		}
		else 
		{
			my_printf("%d ",b[e]);
		}
	}
		return 0;
}
