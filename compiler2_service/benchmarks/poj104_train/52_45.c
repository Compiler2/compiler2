#define NUM_ITER 54540

#include <header.h>

int main_bench()
{
	int m,n,i,i1,temp;
	int a[100];
	my_scanf("%d%d",&m,&n);
	n=n%m;
	for(i=0;i<m;i++){
		my_scanf("%d",&a[i]);
	}
	if (n==0||n==m)goto a;
	else if(n!=0){
	for(i=0;i<n;i++){
		for(i1=m-1;i1>0;i1--){
			temp=a[i1-1];
			a[i1-1]=a[i1];
			a[i1]=temp;
		}
	}
	}
a:	for(i=0;i<m-1;i++)my_printf("%d ",a[i]);
	my_printf("%d",a[m-1]);
	return 0;
}
