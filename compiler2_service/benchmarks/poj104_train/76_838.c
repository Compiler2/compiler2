#define NUM_ITER 23910

#include <header.h>

int main_bench()
{
	int n,k,min,max,sz1[50000],sz2[50000];
	double e;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&sz1[i],&sz2[i]);
		if(i==0){
			max=sz2[i];
			min=sz1[i];
		}else{
			if(max<sz2[i])
				max=sz2[i];
			if(min>sz1[i])
				min=sz1[i];
		}
	}
	e=min+0.5;
	for(int j=0;max-e>0;j++){
		for(k=0;k<n;k++){
			if(e>sz1[k]&&e<sz2[k])
				break;
		}
		if(k==n){
			my_printf("no");
			break;
		}
		e++;
	}
	if(e>max)
		my_printf("%d %d",min,max);
	return 0;
}
			