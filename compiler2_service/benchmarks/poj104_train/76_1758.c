#define NUM_ITER 12278

#include <header.h>

int main_bench()
{
	int n,i,a[5000],b[5000],sum[10001]={0},max=0,min,c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		c=a[i];
	    d=b[i];
		for(;c<d;c++)
			sum[c]=1;
	}
     min=a[0];
	for(i=0;i<n;i++){
        if(b[i]>max)
			max=b[i];
		if(a[i]<min)
			min=a[i];
	}
	for(i=min;i<max;i++){
		if(sum[i]==0){
			my_printf("no");
		     return 0;                                                    
		}
	}
	 my_printf("%d %d",min,max);
return 0;
}