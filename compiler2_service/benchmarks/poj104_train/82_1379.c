#define NUM_ITER 39882

#include <header.h>

int main_bench(){
	int n,i,j,s,t=0,m,max=0,a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
            if(t>max){
			  max=t;
			}
		}else{
			t=0;
		}
	}my_printf("%d",max);
	return 0;
}
