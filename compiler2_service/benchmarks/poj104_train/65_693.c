#define NUM_ITER 30621

#include <header.h>




int main_bench()
{
	int n,a,b,i,j;
	int c[200][2];
	my_scanf ("%d",&n);
	a=0;
	b=0;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if((c[i][0]==0&&c[i][1]==1)||(c[i][0]==1&&c[i][1]==2)||(c[i][0]==2&&c[i][1]==0)){
			a++;
		}else if(c[i][0]==c[i][1]){
			a=a+0;
			b=b+0;
		}else{
			b++;
		}
	}
	if(a>b){
		my_printf("A");
	}if(b>a){
		my_printf("B");
		}if(a==b){
			my_printf("Tie");
		}
	return 0;
}
