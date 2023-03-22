#define NUM_ITER 52020

#include <header.h>

int main_bench()
{
 	int n,i,max1,max2;
 	my_scanf("%d",&n);
 	int a[n];
 	for(i=0;i<n;i++){
 	    my_scanf("%d\n",&a[i]);
    }
    if(a[0]>=a[1]){
        max1=a[0];
		max2=a[1]; 
    }
    else {
        max1=a[1];
        max2=a[2];
    }
    for(i=2;i<n;i++){
        if(a[i]>=max1){
		    max2=max1;
			max1=a[i];
		}
		else if(a[i]<max1 && a[i]>=max2)
		    max2=a[i];
    }
	my_printf("%d\n",max1);
	my_printf("%d",max2);
	return 0;					  
           
}
