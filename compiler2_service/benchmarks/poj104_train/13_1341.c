#define NUM_ITER 5929

#include <header.h>

int main_bench(){
	int n,u[20000],a[20000],b,c;
	b=0;
	c=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d ",&u[i]);
		a[i]=0;}
	if(n==1){
		my_printf("%d",u[0]);}
	else{
	for(int i=1;i<n;i++){
		for(int j=0;j<=i-1;j++){
			if(u[i]==u[j]){
				a[i]=a[i]+1;}}}
    for(int i=0;i<n;i++){
				if(a[i]==0){
                   b=b+1;}}
	for(int i=0;i<n;i++){
				if(a[i]==0){
					c=c+1;
					if(c<b){
						my_printf("%d ",u[i]);}
					if(c==b){
						my_printf("%d",u[i]);}}}}
	my_scanf("%d",&n);		
	return 0;
	}