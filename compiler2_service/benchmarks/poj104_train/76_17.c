#define NUM_ITER 3187

#include <header.h>

int main_bench(){
	int a[10000],b[10000];
	int n,min=10001,max=0;
	int i,num,flag;
	double t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n;i++){
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(t=min+0.5;t<=max-0.5;t++){
		flag=0;
		for(i=0;i<n;i++)
			if(t>=a[i] && t<=b[i])
				flag++;
		if(flag==0){
			my_printf("no");
			break;
		}
	}
	if(flag!=0)
		my_printf("%d %d",min,max);
}









