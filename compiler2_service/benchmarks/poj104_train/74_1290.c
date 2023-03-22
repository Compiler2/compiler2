#include <header.h>

int su(int n){
	int i;
	int t=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			t++;
		}
	}
	if(t==0)
		return 1;
	else
		return 0;
}
int hui(int n){
	int o=0;
	int q=0;
	q=n;
	while(1){
		o=10*o+q%10;
		q=q/10;
		if(q==0){
			break;
		}
	}
		if(n==o)
		    return 1;
		else
			return 0;
	
}
int main_bench()
{
	int m,n,i,a[10000],k=0;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(su(i)==1&&hui(i)==1){
			a[k]=i;
			k++;
		}
	}
	if(k==0){
		my_printf("no");
	}
	else{
		for(i=0;i<k-1;i++){
			my_printf("%d,",a[i]);
		}
		my_printf("%d",a[k-1]);
	}
	my_printf("\n");
	return 0;
}
