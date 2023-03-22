#include <header.h>

int main_bench() {
	int n,i,j,a[1000],s[1000],b[1000];
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s[i]=0;	
		b[0]=1;
		b[1]=1;
		for(j=2;j<a[i];j++){
			b[j]=b[j-1]+b[j-2];
		}
		for(j=0;j<a[i];j++){
			s[i]+=b[j];
		}
	my_printf("%d\n",b[j-1]);
	}
	return 0;
}
