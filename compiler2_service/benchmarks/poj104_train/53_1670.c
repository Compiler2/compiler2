#define NUM_ITER 6052

#include <header.h>

int main_bench(){
	int a[300],b[300];
	int n,i,j=0,k,flag=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		my_scanf("%d",&a[i]);
		for(k=0;k<i;k=k+1){
			if(a[i]==a[k]){flag=1;}

		}
		if(flag==0){b[j]=a[i];j=j+1;}
		flag=0;

	}
	my_printf("%d",b[0]);
	for(i=1;i<j;i=i+1){my_printf(",%d",b[i]);}
}