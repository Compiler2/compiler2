#define NUM_ITER 207800

#include <header.h>

int main_bench()
{
	int a[5][5],n,m,o,i,k,t;
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			my_scanf("%d ",&a[i][k]);
		}
	}
	my_scanf("%d %d",&n,&m);
	if(n<0||n>4||m<0||m>4){
		o=0;
	}
	else{
		o=1;
	}
	if(o==1){
		for(i=0;i<5;i++){
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		for(i=0;i<5;i++){
				my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
			}
		}
	else if(o==0){
		my_printf("error");
	}
	return 0;
}