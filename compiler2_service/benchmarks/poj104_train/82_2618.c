#define NUM_ITER 37314

#include <header.h>

int main_bench(){
	int i,n,a[100][2],k=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n;i++){
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
			k++;
		else{
			if(k>max)
				max=k;
			k=0;
		}
	}
	if(k>max)
		max=k;
	k=0;
	my_printf("%d\n",max);
	return 0;
}