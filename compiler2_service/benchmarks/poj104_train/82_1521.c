#define NUM_ITER 33790

#include <header.h>

int main_bench(){
	int i,n,t,j,max,e,f;
    t=0;
	my_scanf("%d",&n);
	int a[100];int b[100];int c[100];
    for(j=0;j<=99;j++)
		a[j]=0,b[j]=0,c[j]=0;
	max=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(a[i]),&(b[i]));
		
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			t++;
		}else{c[i]=t;
	t=0;
	}
	c[n]=t;
	}
	for(i=0;i<=n;i++){
		if(c[i]>max){max=c[i];}
	}
	my_printf("%d",max);
	return 0;
}