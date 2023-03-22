#define NUM_ITER 39138

#include <header.h>

int main_bench(){
	int n,i;
	int c=0;
	int a[200],b[200];
	my_scanf("%d",&n);
		for(i=0;i<n;i++){
	my_scanf("%d%d",&a[i],&b[i]);
	if((a[i]-b[i])==(-1)||(a[i]-b[i])==2){
		c++;}else if(a[i]==b[i]){
			c=c;}else{c--;}
	}
		if(c>0){my_printf("A");}
		else if(c<0){my_printf("B");}
		else{my_printf("Tie");}
	return 0;
	}
