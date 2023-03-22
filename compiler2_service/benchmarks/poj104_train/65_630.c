#include <header.h>

int main_bench(){
	int n,i,a=0,b=0;
	int A[200],B[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&A[i],&B[i]);
		int c=A[i]-B[i];
		if(c==-1||c==2) a++;
        else if(c==1||c==-2) b++;}
	if(a>b) my_printf("A");
	else if(a==b) my_printf("Tie");
	else my_printf("B");
	return 0;
}