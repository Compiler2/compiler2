#define NUM_ITER 878630

#include <header.h>

int main_bench(){
	char mid,a[100],b[100];
	int i,j,stop,length,dif;
	my_scanf("%s%s",a,b);
	length=strlen(a);
	for(i=1;i<=length;i++){
		for(j=0;j<length-i;j++){
			if(a[j+1]<a[j]){
				mid=a[j];
				a[j]=a[j+1];
				a[j+1]=mid;
			}
			if(b[j+1]<b[j]){
				mid=b[j];
				b[j]=b[j+1];
				b[j+1]=mid;
			}
		}
	}
	dif=strcmp(a,b);
	if(dif==0){
		my_printf("YES");
	}else{
		my_printf("NO");
	}

	my_scanf("%d",&stop);
	return 0;
}