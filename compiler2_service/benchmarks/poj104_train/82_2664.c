#define NUM_ITER 5668

#include <header.h>

int main_bench(){
    int n,count[100]={0},m=0,a,b;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
        if((a>=90&&a<=140)&&(b>=60&&b<=90)){
			count[m]++;
		}else{
			m++;
		}
	}
    int e=0,k,f;
	for(k=0;k<n-1;k++){
		for(f=k+1;f<n;f++){
			if(count[f]>count[k]){
				e=count[k];
				count[k]=count[f];
				count[f]=e;
			}
		}
	}
	my_printf("%d",count[0]);
    return 0;
}