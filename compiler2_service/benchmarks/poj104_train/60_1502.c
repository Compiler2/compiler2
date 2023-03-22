#define NUM_ITER 9797

#include <header.h>

int prime(int n);
int main_bench(){
	int a,b,i,n,num,mid,mid0,line1[1000],line2[1000];
	my_scanf("%d",&n);
	num=0;
	mid=0;
	for(i=3;i<n;i++){
		a=prime(i-2);
		b=prime(i);
		if(b-a==2){
			line1[num]=a;
			line2[num]=b;
			num++;
			mid++;
		}
	}
	if(n<5){
		my_printf("empty");
	}
	if(n==5){
		my_printf("3 5\n");
	}
	for(i=0;i<mid;i++){
		my_printf("%d %d\n",line1[i],line2[i]);
	}
	return 0;
}
int prime(int n){
	int i=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(i==n){
		return n;
	}else{
		return 0;
	}
}