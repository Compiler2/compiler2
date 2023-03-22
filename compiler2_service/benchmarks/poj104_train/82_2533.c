#include <header.h>

int main_bench(){
	int n,i,k=0,a[100],b[100],c[100]={0},m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){c[k]++;}
		else{k++;}
	}
	m=c[0];
	for(i=0;i<k+1;i++){
		if(m<c[i]){m=c[i];}
	}
	if(m==0){my_printf("%d",m);}
	else{my_printf("%d",m);}
	return 0;
}