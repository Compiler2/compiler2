#include <header.h>

int main_bench()
{
	int n,a[100],b,c,i;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		my_scanf("%d",&(a[i]));
		if((a[i-1])<(a[i])){
			b=a[i];
		}
		
	}
	c=a[0];
	for(i=0;i<n;i++){
		if(c<a[i]&&a[i]<b){
			c=a[i];
		}

	}
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	return 0;
}
