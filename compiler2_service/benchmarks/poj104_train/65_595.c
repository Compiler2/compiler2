#define NUM_ITER 35962

#include <header.h>

int main_bench(){
	int n,a[100],b[100],i,sy[100],P=0,A=0,B=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
			sy[i]=0;P++;}
		else if(a[i]-b[i]==-1 || a[i]-b[i]==2){
			sy[i]=1;A++;}
		else {
			sy[i]=-1;B++;}
	}
	for(i=0;i<n;i++){
		if(A>B){
			my_printf("A\n");break;}
		else if(A<B){
			my_printf("B\n");
			break;
		}else{
			my_printf("Tie\n");
			break;
		}
	}
	return 0;
}
