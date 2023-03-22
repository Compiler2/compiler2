#include <header.h>

int F(int a);
int main_bench()
{
	int n,r=0,i;
	my_scanf("%d",&n);
	for(i=2;i<n-1;i++){
		if(F(i)&&F(i+2)){
			my_printf("%d %d\n",i,i+2);
			r++;
		}
		if(i==n-2&&r==0){
			my_printf("empty");
		}
	}
	return 0;
}
int F(int a){
	int j;
	for(j=2;j<a;j++){
		if(a%j==0){
			return 0;
		}
		else if(j==a-1&&a%j!=0){
			return 1;
		}
	}
}