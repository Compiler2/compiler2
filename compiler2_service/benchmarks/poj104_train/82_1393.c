#define NUM_ITER 40209

#include <header.h>

int main_bench(){
	int n,i,s=0,d=0;
	int a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			s+=1;
		}else{
			if(s>d){
				d=s;
			}
			s=0;
		}
	}
	if(a[n-1]>=90&&a[n-1]<=140&&b[n-1]>=60&&b[n-1]<=90){
		s+=1;
		if(s>d){
			d=s;
		}
	}
	my_printf("%d",d);
	return 0;
}