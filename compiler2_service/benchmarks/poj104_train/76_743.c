#define NUM_ITER 3153

#include <header.h>

int main_bench(){
    int a[10000],b[10000],c[10000]={0};
	int min=10000,max=0,i,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	    my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
	    if(min>a[i]){
		    min=a[i];
		}
		if(max<b[i]){
		    max=b[i];
		}
	}
         c[min]=1;
	for(i=min+1;i<=max;i++){
	     for(j=0;j<n;j++){
		     if(a[j]<=(i-0.5)&&i<=b[j]){
			      c[i]=1;
			 }
		 }
	}
	for(i=min;i<=max;i++){
	    if(c[i]==0){
		    my_printf("no");
                       break;
		}else if(i==max){
		    my_printf("%d %d",min,max);
		}
	}
	return 0;
}