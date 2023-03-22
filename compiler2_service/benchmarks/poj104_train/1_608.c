#include <header.h>

int f(int n,int min){
	int i,result=1;
	if(n<min)return 0;
	for(i=min;i<n;i++)
		if(n%i==0)result+=f(n/i,i);
	return result;
}
int main_bench()
{
	int cases,a;
	my_scanf("%d",&cases);
	while(cases--){
		my_scanf("%d",&a);
		my_printf("%d\n",f(a,2));
	}
}