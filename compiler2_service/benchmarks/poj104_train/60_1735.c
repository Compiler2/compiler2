#define NUM_ITER 17089

#include <header.h>


int prime(int k){
	if(k==2)return 1;
	int indct=1;
	int i;
	for(i=2;i<k;i++){
		if(k%i==0){
			indct=0;
			break;
		}
	}
	return indct;
}

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n==1||n==2||n==3||n==4)my_printf("\nempty");
	int indct[10000]={0,0,1};
	int i;
	for(i=2;i<=n;i++){
		if(prime(i)==1)indct[i]=1;
	}
	int found=0;
	for(i=2;i<=n-2;i++){
		if(indct[i]==1&&indct[i+2]==1){
			my_printf("\n%d %d",i,i+2);
			found=1;
		}
	}
	
	return 0;
}