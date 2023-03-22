#include <header.h>

int main_bench(){
	int n,i,m,k;
	int gy[100];
	int dy[100];
	k=0;
	m=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&gy[i],&dy[i]);
		if(gy[i]>=90&&gy[i]<=140&&dy[i]>=60&&dy[i]<=90){
			k++;if(k>m){
				m=k;
			}}else{
				m=m;
				k=0;
		}
	}
	my_printf("%d",m);
	return 0;
}