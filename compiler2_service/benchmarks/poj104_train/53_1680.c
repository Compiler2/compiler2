#define NUM_ITER 7627

#include <header.h>

int main_bench()
{
	int n,i=0,j=0,p=0,q=1,a[300],b[300]={0};
	my_scanf("%d",&n);
	
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);}
	b[0]=a[0];
    	for(i=1;i<n;i++){
			for(j=0;j<i;j++){
				if(a[i]!=a[j])p++;}
			if(p==i){b[q]=a[i];q++;}p=0;}
		my_printf("%d",b[0]);
		
		for(i=1;i<q;i++){
			my_printf(",%d",b[i]);}
}