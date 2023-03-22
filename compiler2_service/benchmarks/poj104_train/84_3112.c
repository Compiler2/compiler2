#include <header.h>

int main_bench()
{
    int n,a,i,max1=-10000,max2=-10000;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a);
        if (a>max1){
			max2=max1;
			max1=a; }  
		else if(a<max1&&a>max2)
		    max2=a;
		else if(a<max2)
			;
	}
	my_printf("%d\n%d",max1,max2);
	return 0;
}