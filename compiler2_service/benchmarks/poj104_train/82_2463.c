#define NUM_ITER 5151

#include <header.h>

int main_bench(){
	int n,i,j=0,a[100],b[100],s=0,c[100]={0},e;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90&&i!=n-1){
			s++;
		}
		else if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90&&i==n-1){
			s++;
			c[j]=s;
		}
		else{
			c[j]=s;
			s=0;
			j++;
		}
	}
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
			if(c[j]<c[j+1]){
				e=c[j];
				c[j]=c[j+1];
				c[j+1]=e;
			}
		}
	}
	my_printf("%d",c[0]);
	return 0;
}