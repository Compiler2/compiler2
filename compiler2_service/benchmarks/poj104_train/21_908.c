#include <header.h>


int main_bench() {
	struct data1 {
		int num;
		float min;
	} data[1000], temp;
	int n, i,j;
	float sum=0, max;
	my_scanf("%d", &n);
	for(i=0;i<n;i++) {
		my_scanf("%d", &data[i].num);
		sum+=data[i].num;
	}
	sum=sum/n;
	for(i=0;i<n;i++) {
		if(data[i].num>=sum) {
			data[i].min=data[i].num-sum;
		} else {
			data[i].min=sum-data[i].num;
		}
	}
	for(i=0;i<n;i++) {
		for(j=n-1;j>0;j--) {
			if(data[j].min>data[j-1].min) {
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
				
			}
		}
	}
	max=data[0].min;
	my_printf("%d", data[0].num);
	for(i=1;fabs(data[i].min-max)<1e-6;i++) {
		my_printf(",%d", data[i].num);
	}
	return 0;
}

			

