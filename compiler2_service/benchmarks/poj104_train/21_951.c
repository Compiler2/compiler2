#include <header.h>

int main_bench()
{
	int n,i,max,sum=0,b1=0,b2=0;
	float ave;
	unsigned int a[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=(float)sum/n;
	max=0;
	for(i=0;i<n;i++){
		if(fabs(a[i]-ave)>=max){
			if(a[i]<ave){
				max=fabs(a[i]-ave);
				b1=i;
			}
			else{
				max=fabs(a[i]-ave);
				b2=i;
			}
		}
	}
	if((a[b2]-ave)>(ave-a[b1])) my_printf("%d",a[b2]);
	else if((a[b2]-ave)<(ave-a[b1])) my_printf("%d",a[b1]);
	else my_printf("%d,%d",a[b1],a[b2]);
	return 0;
}