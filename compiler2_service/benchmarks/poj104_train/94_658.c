#define NUM_ITER 19498

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,k,b,h,c;
	int*shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		my_scanf("%d",&shuzu[i]);
	}
	int a=0;
	int*shuzu_=(int*)malloc(sizeof(int)*n);
	for(k=0;k<n;k++){
		if(shuzu[k]%2!=0){
			shuzu_[a]=shuzu[k];
			a++;
		}
	}
	a=a;
	int g;
	for(b=1;b<=a;b++){
		int e=0;
		for(c=0;c<=a-b;c++){
			if(shuzu_[c]>shuzu_[e]){
				e=c;
			}
		}
		if(e!=a-b){
			g=shuzu_[a-b];
			shuzu_[a-b]=shuzu_[e];
			shuzu_[e]=g;
		}
	}
	for(h=0;h<a-1;h++){
		my_printf("%d,",shuzu_[h]);
	}
	if(h=a-1){
		my_printf("%d",shuzu_[a-1]);
	}
	return 0;
}