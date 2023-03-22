#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int a[100]={0};
	int b,c;
	int i,j=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&b,&c);
		if(b<=140&&b>=90&&c<=90&&c>=60){
			a[j]++;
		}
		else{
			j++;
		}
	}
	b=a[0];
	for(i=1;i<=j;i++){
		if(a[i]>b){
			b=a[i];
		}
	}
	my_printf("%d",b);
	return 0;
}