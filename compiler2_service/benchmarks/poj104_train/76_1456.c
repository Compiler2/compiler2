#define NUM_ITER 3931

#include <header.h>

int main_bench(){
	int n,i,e=0,min=0,max=0,a[50000],b[50000];
	double k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
		if(a[i]<a[min]){
			min=i;}
		if(b[i]>b[max]){
			max=i;}
	}
	for(k=a[min]+1.0/2;k<b[max];k++){
                e=0;
		for(i=0;i<n;i++){
			if(k>=a[i]&&k<=b[i]){
			e=1;}
		}
		if(e==0){break;}
	}
	if(e==1){
		my_printf("%d %d",a[min],b[max]);}
	else{my_printf("no");}
return 0;
}