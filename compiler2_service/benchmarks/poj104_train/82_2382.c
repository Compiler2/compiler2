#define NUM_ITER 6512

#include <header.h>

int main_bench(){
	int c,i,a,b,n[100]={0},k=0,j,e;
	my_scanf("%d",&c);
	for(i=0;i<c;i++){
		my_scanf("%d%d",&a,&b);
		if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
			n[k]+=1;
		else
			k+=1;
	}
	for(j=1;j<=k+1;j++){
	for(i=0;i<k+1-j;i++){

		if(n[i]<n[i+1]){
			e=n[i];
			n[i]=n[i+1];
			n[i+1]=e;
		}
	}
	}
	my_printf("%d",n[0]);



	return 0;
}