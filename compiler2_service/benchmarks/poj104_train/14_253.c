#define NUM_ITER 18923

#include <header.h>

struct student{
	int num;
	int chinese;
	int math;
};
int main_bench()
{ 
    int n,i;
	my_scanf("%d",&n);
	struct student a[100000],e ;
	for(i=0;i<n;i++){
		my_scanf("%d %d %d",&a[i].num,&a[i].chinese,&a[i].math);		
	}
	for(i=0;i<n-1;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=0;i<n-2;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=0;i<n-3;i++){
		if(a[i].chinese+a[i].math>=a[i+1].chinese+a[i+1].math){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
	for(i=n-1;i>n-4;i--){
		my_printf("%d %d\n",a[i].num,a[i].chinese+a[i].math);
	}
	return 0;
}

