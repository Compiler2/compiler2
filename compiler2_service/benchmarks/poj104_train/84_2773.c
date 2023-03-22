#define NUM_ITER 56657

#include <header.h>

int main_bench(){
	int a[100];
	int m,i,max1,max2;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	max1=a[0];
	for(i=0;i<m;i++)
		if(a[i]>max1)max1=a[i];
	max2=a[0];
	for(i=0;i<m;i++)
		if(a[i]>max2&&a[i]!=max1)
			max2=a[i];
	my_printf("%d\n%d",max1,max2);
}
		
	

