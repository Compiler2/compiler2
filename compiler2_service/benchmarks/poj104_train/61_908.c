#include <header.h>

int a[22]={0,1,1};
int fibo(int n){
	if(n==1||n==2)return 1;
	else if(a[n]==0)a[n]=fibo(n-1)+fibo(n-2);
	return a[n];
}
int main_bench()
{
	int n,cases;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&n);
		printf("%d\n",fibo(n));
	}
}