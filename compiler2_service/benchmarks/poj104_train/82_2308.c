#define NUM_ITER 5683

#include <header.h>

int main_bench(){
	int n,i,j,a,b,k[100],m,l;
	my_scanf("%d",&n);
	for(i=0;i<100;i++){k[i]=0;}
	m=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if((a>=90&&a<=140)&&b>=60&&b<=90){
			k[m]++;
		}
		else m++;
	}
	for(i=1;i<=m;i++){
		for(j=0;j<=m-i;j++){
			if(k[j]>k[j+1]){
				l=k[j];
				k[j]=k[j+1];
				k[j+1]=l;
			}
		}
	}
	my_printf("%d",k[m]);
	return 0;
}
