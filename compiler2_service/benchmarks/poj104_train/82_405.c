#define NUM_ITER 39032

#include <header.h>

int main_bench(){
	int n,a[100],b[100];
	my_scanf("%d",&n);
	int i,result=0,p=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			p++;
		}else{
			if(p>result){
				result=p;
			}else{
				result=result;
			}
			p=0;
		}
	}
	while(i==n-1){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			p++;
		}
		if(p>result){
			result=p;
		}
		i++;
	}
	my_printf("%d\n",result);
	return 0;
}