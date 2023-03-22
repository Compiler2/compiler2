#include <header.h>

int main_bench()
{
	int i,j,n,t,a[300]={0};
	float ave=0,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	if((ave-a[0])>(a[n-1]-ave))
		my_printf("%d",a[0]);
	else if((ave-a[0])<(a[n-1]-ave))
		my_printf("%d",a[n-1]);
	else
		my_printf("%d,%d",a[0],a[n-1]);
	return 0;
}
