#define NUM_ITER 39433

#include <header.h>

int main_bench(){
	int a[100]={0};
	int s=0,b1,b2;
	int i,n,t,max=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&b1,&b2);
		if(b1>=90&&b1<=140&&b2>=60&&b2<=90){
			s++;
			if(s>max){
				max=s;
			}
		}else{
			s=0;
		}
		
	}
		my_printf("%d",max);
	
	return 0;
}